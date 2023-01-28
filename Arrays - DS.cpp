#include<bits/stdc++.h>
using namespace std;
vector<int>reverseNum(vector<int>a)
{
    vector<int>r;
    for(int i=a.size()-1; i>=0; i--)
    {
        r.push_back(a[i]);
    }
    return r;
}
int main()
{
    int t,num;
    cin>>t;
    vector<int>a;
    while(t--)
    {
        cin>>num;
        a.push_back(num);
    }

    vector<int>rev=reverseNum(a);
    for(int i=0; i<rev.size(); i++)
    {
        cout<<rev[i]<<" ";
    }
    cout<<endl;

}
