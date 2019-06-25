#include<stdio.h>
#include<iostream>
using namespace std;
void merge(int a[],int l[],int r[],int sl,int sr)
{
	int pl=0;
	int pr=0;
	int pm=0;
	while(pl<sl && pr<sr)
	{
		if(l[pl]<r[pr])
		{
			a[pm]=l[pl];
			pl+=1;
		}
		else
		{
			a[pm]=r[pr];
			pr+=1;
		}
		pm+=1;
	}
	while(pl<sl)
	{
		a[pm]=l[pl];
		pl+=1;
		pm+=1;
	}
	while(pr<sr)
	{
		a[pm]=r[pr];
		pr+=1;
		pm+=1;
	}
}

void merge_sort(int a[],int n)
{
	if(n<2)
	return;
	
	int h=n/2;
	int l[h];
	int r[n-h];
	
	for(int i=0;i<h;i++)
	{
		l[i]=a[i];
	}

	for(int i=0;i<n-h;i++)
	{
		r[i]=a[h+i];
	}
	
	merge_sort(l,h);
	merge_sort(r,n-h);
	merge(a,l,r,h,n-h);
}
int main()
{
	cout<<"Enter the no. of elements : ";
	int l;
	cin>>l;
	cout<<endl;
	int a[l];
	for(int i=0;i<l;i++)
	{
		cout<<"Enter the "<<i+1<<"th element : ";
		cin>>a[i];
	}
	merge_sort(a,l);
	cout<<endl<<"Sorted array is : ";
	for(int i=0;i<l;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return (0);
}
