#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int a[]={1,0,3,2,7,4,6,9,5,8,10};
	cout<<endl;
	cout<<"Enter a number from 0 to 10 for searching : ";
	int t;
	cin>>t;
	cout<<endl;
	if(t>10 || t<0)
	cout<<"Don't you know English ?"<<endl;
	else
	{
	int i=0;
	while(a[i]!=t)
	{
		i+=1;
	}
	cout<<"The number "<<t<<" is at "<<i+1<<"th position."<<endl;
	for(int j=0;j<11;j++)
	cout<<a[j]<<" ";
	cout<<endl;}
	main();
	return(0);
}
