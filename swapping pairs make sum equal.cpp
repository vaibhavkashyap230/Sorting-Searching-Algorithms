#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    int a[n],b[m];
	    unordered_map<int,int>ca;
	    unordered_map<int,int>cb;
	    int sa=0,sb=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        sa+=a[i];
	        ca[a[i]]=1;
	    }
	    for(int i=0;i<m;i++)
	    {
	        cin>>b[i];
	        sb+=b[i];
	        cb[b[i]]+=1;
	    }
	    int d=abs(sa-sb);
	    bool f=0;
	    if(sa>=sb)
	    {
	    	
		}
	    if(f)
	    cout<<f<<endl;
	    else
	    cout<<-1<<endl;
	}
	return 0;
}
