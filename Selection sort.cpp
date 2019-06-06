#include<stdio.h>
#include<iostream>
using namespace std;
void print(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void selection_sort(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int min=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			min=j;
		}
		int temp=a[min];
		a[min]=a[i];
		a[i]=temp;
	}
	cout<<"  Sorted array : ";
	print(a,n);
}
int main()
{
	int a[]={3,2,1,4,7,8,5,9,6,0};
	int n=sizeof(a)/sizeof(int);
	cout<<"Unsorted array : ";
	print(a,n);
	selection_sort(a,n);
	return(0);
}
