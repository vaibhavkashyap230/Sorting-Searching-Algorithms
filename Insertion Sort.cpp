#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int a[]={2,1,0,3,7,5,9,6,4,8};
	int n=sizeof(a)/sizeof(int);
	cout<<"Unsorted : ";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	for(int i=1-1;i<n;i++)
	{
		int ci=a[i];
		int h=i;
		for(int j=i-1;j>=0;j--)
		{
			if(a[j]>ci)
			{
				a[j+1]=a[j];
				h-=1;
			}
		}
		a[h]=ci;
	}
	cout<<"  Sorted : ";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return(0);
}
