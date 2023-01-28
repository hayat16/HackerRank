#include<bits/stdc++.h>
using namespace std;
int diagonalSum(vector<vector<int> >arr)
{
    int sum1=0,sum2=0,diff=0;
    for(int i=0; i<arr.size(); i++)
    {
        sum1=sum1+arr[i][i];
    }
    for(int i=arr.size()-1; i>=0; i--)
    {
        sum2=sum2+arr[arr.size()-i-1][i];
    }
    diff=sum1-sum2;
    if(diff<0)
        return -1*diff;
    else
        return diff;
}

int main()
{
    int t,n;
    cin>>t;
    vector<vector<int> >arr(t , vector<int> (t));//2D vector
    for(int i=0; i<t; i++)
    {
        for(int j=0; j<t; j++)
        {
            cin>>n;
            arr[i][j]=n;
        }
    }
    int sum=diagonalSum(arr);
    cout<<sum<<endl;
}
