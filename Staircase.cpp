#include<bits/stdc++.h>
using namespace std;
void staircase(int n)
{
    for(int i=0; i<n; i++)
    {

        for(int j=0; j<n-1-i; j++)
        {
            cout<<' ';
        }
        for(int j=n-1-i; j<n; j++)
        {
            cout<<'#';
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    staircase(n);
}
