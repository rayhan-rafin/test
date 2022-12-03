#include<bits/stdc++.h>
using namespace std;
int main ()
{
    stack<int>brkt;
    string s;
    bool flag = 0;
    cin>>s;
    for(int i =0; i<s.size(); i++)
    {
        if (s[i]=='(')
        {
            brkt.push(s[i]);
        }
        else
        {
            if(brkt.empty())
            {
                //brkt.push('a');
                flag=true;
                break;
            }
            brkt.pop();
        }
    }
    if (brkt.empty() && !flag)
    {
        cout<<"YES"<<endl;
    }
    else
    {
       cout<<"NO"<<endl;
    }
    return 0;
}
