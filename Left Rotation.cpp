#include<bits/stdc++.h>
using namespace std;
vector<int>leftRotation(vector<int>v1,int d)
{
    vector<int>v2;
    for(int i=d;i<v1.size();i++)
    {
        v2.push_back(v1[i]);
    }
    for(int i=0;i<d;i++)
    {
        v2.push_back(v1[i]);
    }
    return v2;
}
int main()
{
    int n,d,a;
    cin>>n>>d;
    vector<int>v1;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v1.push_back(a);
    }
    vector<int>r=leftRotation(v1,d);
    for(int i=0;i<n;i++)
    {
        cout<<r[i]<<" ";
    }
    return 0;
}
