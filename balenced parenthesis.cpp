#include <bits/stdc++.h>
#include<stack>
#include<string>
using namespace std;
int main()
{
        string s;
        cin>>s;
          bool result;
          int l = s.length();
          stack<char> a;
          for (int i = 0; i < l; i++) 
          {
            if (i == l - 1)
            {
              result = true;
              cout<<"Yes";
              return 0;
            }
            else if (s[i] == '[' || s[i] == '{' || s[i] == '(') 
            {
              a.push(s[i]);
            }
            else if (s[i] == '}')
            {
              if (a.top() == '}') 
              {
                a.pop();
              }
              else
              {
                result = false;
                cout<<"No";
                return 0;
              }
            } 
            else if (s[i] == ']') 
            {
              if (a.top() == ']')
                a.pop();
              else 
              {
                result = false;
                cout<<"No";
                return 0;
              }
            } 
            else if (s[i] == ')') 
            {
              if (a.top() == ')')
                a.pop();
              else 
              {
                result = false;
                cout<<"No";
                return 0;
              }
            }
          }
          if (result == 1)
          s = "YES";
          s = "NO";
          cout<<s<<endl;
    return 0;
}
