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
	int a[12]={2,5,8,9,10,12,16,18,19,25,26,45};
	cout<<"Enter a number to search : ";
	int n;
	cin>>n;
	if(binary_search(a,sizeof(a)/sizeof(int),n)==1)
	cout<<"The number is present"<<endl<<endl;
	else
	cout<<"The number is not present"<<endl<<endl;
	main();
	return (0);
}
