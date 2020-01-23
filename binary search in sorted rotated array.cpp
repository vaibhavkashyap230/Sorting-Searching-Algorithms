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
        
        if(a[n-1]>a[0])
        {
            cout<<binary_search(a,a+n,t)<<endl;
            return(0);
        }
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
        if(t>a[0])
        {
        	s=0;
        	e=p;
        }
        else
        {
        	s=p+1;
        	e=n-1;
        }
        int f=1;
        while(s<=e)
        {
        	int mid=(s+e)/2;
        	if(a[mid]==t)
        	{
        		cout<<mid<<endl;
        		f=0;
        		break;
        	}
        	else if(t>a[mid])
        	{
        		s=mid+1;
        	}
        	else
        	{
        		e=mid-1;
        	}
        }
        if(f==1)
        {
        	cout<<-1<<endl;
        }
    return(0);
}
