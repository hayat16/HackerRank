#include<bits/stdc++.h>
using namespace std;
string superReducedString(string S)
{
    bool Zero(false);
    for (int i = 0; i < (S.length() - 1); i++)
    {
        if (S[i] == S[i + 1])
        {
            S.erase(S.begin() + i);
            S.erase(S.begin() + i);
            if (S.length() == 0)
            {
                Zero = true;
                break;
            }
            i = -1;
        }
    }
    if (Zero)
        return "Empty String";
    else
        return S;

}
int main()
{
    string s;
    cin>>s;
    string res=superReducedString(s);
    cout<<res<<endl;
}
