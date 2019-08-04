#include<stdio.h>
#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n],b[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    for(int i=0;i<n;i++)
	    cin>>b[i];
	    int f[2*n];
	    int i=0,j=0,k=0;
	    while(i<n && j<n)
	    {
	        if(a[i]<b[j])
	        {
	            f[k]=a[i];
	            k+=1;
	            i+=1;
	        }
	        else
	        {
	            f[k]=b[j];
	            k+=1;
	            j+=1;
	        }
	    }
	    while(i<n)
	    {
	        	f[k]=a[i];
	            k+=1;
	            i+=1;
	    }
	    while(j<n)
	    {
	        f[k]=b[j];
	            k+=1;
	            j+=1;
	    }
	    cout<<(f[n-1]+f[n])<<endl;
	}
	return 0;
}
