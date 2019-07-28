#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int ff(int a[],int n,int x)
{
	int s=0,e=n-1,r=-1;
	while(s<=e)
	{
		int mid=(s+e)/2;
		
		if(a[mid]==x)
		{
			r=mid;
			e=mid-1;
		}
		
		else if(x>a[mid])
		{
			s=mid+1;
		}
		
		else
		e=mid-1;
	}
	return r;
}
int fl(int a[],int n,int x)
{
	int s=0,e=n-1,r=-1;
	while(s<=e)
	{
		int mid=(s+e)/2;
		
		if(a[mid]==x)
		{
			r=mid;
			s=mid+1;
		}
		
		else if(x>a[mid])
		{
			s=mid+1;
		}
		
		else
		e=mid-1;
	}
	return r;
}
int main()
{
	int a[17]={-12,-9,-5,0,1,3,5,7,9,12,12,12,12,18,36,99,105};
	int x;
	cout<<"Enter the number to find : ";
	cin>>x;
	int f=ff(a,sizeof(a)/sizeof(int),x),l=fl(a,sizeof(a)/sizeof(int),x);
	if(f>=0 && l>=0)
	cout<<"The number "<<x<<" appears "<<l-f+1<<" times."<<endl;
	else
	cout<<"The number is not present in the array."<<endl;
	return(0);
}
