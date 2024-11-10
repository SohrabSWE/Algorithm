#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin>>n>>e;
    vector<pair<int,int> > v;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        // v.push_back(make_pair(a,b));
        v.push_back({a,b});
    }

    // for(int i=0; i<v.size(); i++)
    // {
    //     cout<<v[i].first<<" "<<v[i].second<<endl;
    // }


    // for(pair<int,int> val : v)
    // {
    //     cout<<val.first<<" "<<val.second<<endl;
    // }
    for(auto val : v)
    {
        cout<<val.first<<" "<<val.second<<endl;
    }
    return 0;
}