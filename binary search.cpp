#include<stdio.h>
#include<iostream>
using namespace std;

int binary_search(int a[],int n,int x)
{
	int mid=(int)n/2;
	
	if(a[mid]==x)
	return 1;
	
	if(x>a[mid] && x<=a[n])
	return binary_search(a+mid+1,n-mid,x);
	
	if(x<a[mid] && x>=a[0])
	return binary_search(a,mid-1,x);
	
	else
	return -1;
}

int main()
{
	int a[12]={0,1,2,3,4,5,6,7,8,9,10,11};
	cout<<binary_search(a,sizeof(a)/sizeof(int),-9);
	return (0);
}
