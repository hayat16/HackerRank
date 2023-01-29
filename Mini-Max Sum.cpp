#include<bits/stdc++.h>
using namespace std;
void miniMaxSum(vector<int> arr) {
    long long sum=0;
    int mini=arr[0];
    int maxi=arr[0];
    for(int i=0;i<arr.size();i++)
    {
       if (mini>=arr[i])
       {
           mini=arr[i];
       }
       else if(maxi<=arr[i])
       {
           maxi=arr[i];
       }
       sum=sum+arr[i];
    }
    cout<<sum-maxi<<" "<<sum-mini<<endl;
}
int main()
{
    int n;
    vector<int>v;
    for(int i=0; i<5; i++)
    {
        cin>>n;
        v.push_back(n);
    }
    miniMaxSum(v);
}
