#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int t;
    cin>>t;
        
    int p=0,s=0,e=n-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(a[mid]>a[mid+1])
        {
        	p=mid;
        	break;
        }
        else if(a[s]>a[mid])
        {
        	e=mid-1;
        }
        else
        {
        	s=mid+1;
    	}
    }
    int na[n];
    int c=0;
	for(int i=p+1;i<n;i++,c++)
	{
		na[c]=a[i];
	}
	for(int i=0;i<=p;i++,c++)
	{
		na[c]=a[i];
	}
	bool r=false;
	s=0,e=n-1;
	while(s<e)
	{
		int d=na[s]+na[e];
		if(d==t)
		{
			r=true;
			break;
		}
		else if(d>t)
		{
			e-=1;
		}
		else
		{
			s+=1;
		}
	}
	if(r)
	cout<<"true"<<endl;
	else
	cout<<"false"<<endl;
    return(0);
}
