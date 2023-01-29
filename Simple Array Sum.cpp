#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long int n,sum=0,i,num;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>num;
        sum=sum+num;
    }
    cout<<sum<<endl;
    return 0;
}
