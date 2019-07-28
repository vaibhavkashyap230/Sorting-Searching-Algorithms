#include<stdio.h>
#include<iostream>
using namespace std;
int binary_search(int a[],int n,int x)
{
	int s=0,e=n-1;
	while(s<=e)
	{
		int mid=(s+e)/2;
		if(a[mid]==x)
		return mid;
		
		else if(x>a[mid])
			s=mid+1;
			
		else if(x<a[mid])
		e=mid-1;
	}
	return -1;
}
int main()
{
	int a[12]={-12,-7,-5,3,9,12,18,38,49,55,99,105};
	cout<<"Enter the number to search : ";
	int n;
	cin>>n;
	int r=binary_search(a,sizeof(a)/sizeof(int),n);
	if(r>-1)
	cout<<"The number "<<n<<" is present at index "<<r<<"."<<endl;
	else
	cout<<"The number "<<n<<" is not present in the array."<<endl;
	return (0);
}
