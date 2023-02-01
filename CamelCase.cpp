#include<bits/stdc++.h>
using namespace std;
int camelcase(string s)
{
    int cnt=0;
    for(int i=0;i<s.length()-1;i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            cnt++;
        }
    }
    return cnt+1;
}
int main()
{
    string s;
    cin>>s;
    int res=camelcase(s);
    cout<<res<<endl;

}
