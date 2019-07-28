#include<stdio.h>
#include<iostream>
using namespace std;
int binary_search(int a[],int s,int e,int x)
{
	int mid=(int)((s+e)/2);
	
	if(a[mid]==x)
	return mid;
	
	if(x>a[mid] && x<=a[e])
	return binary_search(a,mid+1,e,x);
	
	if(x<a[mid] && x>=a[s])
	return binary_search(a,s,mid-1,x);
	
	else
	return -1;
}
int main()
{
	int a[12]={-12,-7,-5,3,9,12,18,38,49,55,99,105};
	cout<<endl<<"Enter a number to find : ";
	int n;
	cin>>n;
	int r=binary_search(a,0,sizeof(a)/sizeof(int)-1,n);
	if(r>-1)
	cout<<"The number "<<n<<" is present at index "<<r<<endl;
	else
	cout<<"The number "<<n<<" is not present in the array."<<endl;
	return(0);
}
