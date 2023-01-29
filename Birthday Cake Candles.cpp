#include<bits/stdc++.h>
using namespace std;
int birthdayCakeCandles(vector<int> candles)
{
    int maxi=candles[0],cnt=0;
    for(int i=0; i<candles.size(); i++)
    {
        if(maxi<candles[i])
        {
            maxi=candles[i];
        }
    }
    for(int i=0; i<candles.size(); i++)
    {
        if(maxi==candles[i])
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    int n,t;
    vector<int>v;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        v.push_back(n);
    }
    int result=birthdayCakeCandles(v);
    cout<<result<<endl;
}
