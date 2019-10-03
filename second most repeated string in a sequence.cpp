#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
	    string s;
	    getline(cin,s);
	    vector<string>v;
	    int st=0,e=0;
	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i]==' ')
	        {
	            string ss=s.substr(st,e-st);
	            st=i+1;e=i+1;
	            v.push_back(ss);
	        }
	        else
	        {
	            e+=1;
	        }
	        if(i==s.length()-1)
	        {
	            string ss=s.substr(st,e-st+1);
	            v.push_back(ss);
	        }
	    }
	    unordered_map<string,int>ht;
	    for(int i=0;i<v.size();i++)
	    {
	    	ht[v[i]]+=1;
		}
		int mx=INT_MIN;
		for(auto i=ht.begin();i!=ht.end();i++)
		{
			if(i->second>mx)
			mx=i->second;
		}
		int sl=INT_MIN;
		for(auto i=ht.begin();i!=ht.end();i++)
		{
			if(i->second>sl && i->second!=mx)
			sl=i->second;
		}
		for(auto i=ht.begin();i!=ht.end();i++)
		{
			if(i->second==sl)
			{
				cout<<i->first<<endl;
				break;
			}
		}
	}
	return 0;
}
