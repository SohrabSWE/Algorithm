#include<bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool vis[1005];
bool paisi = false;
void bfs(int src, int des)
{
    queue<pair<int,int>> q;
    q.push({src,0});
    while(!q.empty())
    {
        pair<int,int> p = q.front();
        q.pop();
        int par = p.first;
        int level = p.second;
        if(par == des)
        {
            cout<<level<<endl;
            paisi = true;
        }
        for(int child : v[par])
        {
            if(vis[child] == false)
            {
                q.push({child, level+1});
                vis[child] = true;
            }
        }
    }
    if(paisi == false)
    {
        cout<<-1;
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int src;
    cin>>src;
    memset(vis, false, sizeof(vis));
    bfs(src,3);
    return 0;
}