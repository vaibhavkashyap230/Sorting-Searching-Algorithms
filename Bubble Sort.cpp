#include<stdio.h>
#include<iostream>
using namespace std;
int a[]={3,1,0,2,7,5,9,6,4,8};
void swap(int i)
{
	int temp=a[i];
	a[i]=a[i+1];
	a[i+1]=temp;
}
int main()
{
	int n=sizeof(a)/sizeof(int);
	cout<<"Unsorted array : ";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	bool flag;
	for(int i=0;i<n-1;i++)
	{
		flag=0;
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
			 swap(j);
			 flag=1;
			}
		}
		if(flag==0)
		break;
	}
	cout<<"  Sorted array : ";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return(0);
}
