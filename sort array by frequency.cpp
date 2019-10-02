#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
bool comparator(pair<int,int> a,pair<int,int> b)
{
    if(a.first>b.first)
    return 1;
    if(a.first==b.first)
    {
        if(a.second<b.second)
        return 1;
    }
    return 0;
}
int main()
 {
	int t;
	cin>>t;
	while(t--)
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
	    vector<pair<int,int>>v;
	    for(auto i=ht.begin();i!=ht.end();i++)
	    {
	        pair<int,int>p;
	        p.first=i->second;
	        p.second=i->first;
	        v.push_back(p);
	    }
	    sort(v.begin(),v.end(),comparator);
	    for(int i=0;i<v.size();i++)
	    {
	        for(int j=0;j<v[i].first;j++)
	        cout<<v[i].second<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
