#include<bits/stdc++.h>
using namespace std;
#define s 6
int hourglassSum(int a[s][s])
{
    int sum,m=0,f=0;
    for (int i=1; i<s-1; i++)
    {
        for(int j=1; j<s-1; j++)
        {
            sum=0;
            sum=a[i][j]+
                a[i-1][j-1]+a[i-1][j]+a[i-1][j+1]+
                a[i+1][j-1]+a[i+1][j]+a[i+1][j+1];
            if(f==0)
            {
                m=sum;
                f=1;
            }
            if(sum>m)
            {
                m=sum;
            }
        }
    }
    return m;
}
int main()
{
    int a[s][s];
    for(int i=0; i<s; i++)
    {
        for(int j=0; j<s; j++)
        {
            cin>>a[i][j];
        }
    }
    int result=hourglassSum(a);
    cout<<result;
    return 0;
}
