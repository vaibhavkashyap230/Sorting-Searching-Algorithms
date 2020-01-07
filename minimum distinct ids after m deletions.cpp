#include<stdio.h>
#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	unordered_map<int,int>ht;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		ht[a[i]]+=1;
	}
	int r;
	cin>>r;
	vector<pair<int,int> >v;
	for(auto it=ht.begin();it!=ht.end();it++)
	{
		pair<int,int>p;
		p.first=it->second;
		p.second=it->first;
		v.push_back(p);
	}
	sort(v.begin(),v.end());
	int i=0;
	while(i<v.size())
	{
		if(v[i].first<=r)
		{
			r=r-v[i].first;
			i+=1;
		}
		else
		{
			break;
		}
	}
	cout<<v.size()-i<<endl;
	return (0);
}
