#include<stdio.h>
#include<iostream>
using namespace std;
int fo(int a[],int n,int x)
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
int main()
{
	int a[12]={-12,-7,-5,3,9,9,9,15,49,55,99,105};
	int x;
	cout<<"Enter the number to find : ";
	cin>>x;
	int r=fo(a,sizeof(a)/sizeof(int),x);
	if(r>-1)
	cout<<"Present at "<<r<<endl;
	else
	cout<<"This number does not exist in the array."<<endl;
	return(0);
}
