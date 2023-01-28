#include <bits/stdc++.h>

using namespace std;
// Complete the compareTriplets function below.
vector<int> compareTriplets(vector<int> a, vector<int> b)
{
    vector<int>r;
    int bobs=0,alics=0;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]<b[i])
        {
            bobs=bobs+1;

        }
        else if(a[i]>b[i])
        {
            alics=alics+1;

        }
    }
    r.push_back(alics);
    r.push_back(bobs);
    return r;
}

int main()
{
    int num=0;
    vector<int>a,b;
    for(int i=0; i<3; i++)
    {
        cin>>num;
        a.push_back(num);
    }
    for(int i=0; i<3; i++)
    {
        cin>>num;
        b.push_back(num);
    }
    vector<int> result = compareTriplets(a, b);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i]<<" ";
    }

    cout <<endl;
    return 0;
}
