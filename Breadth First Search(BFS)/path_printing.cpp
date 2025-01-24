#include<bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool vis[1005];
int parent[1005];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while(!q.empty())
    {
        int par = q.front();
        q.pop();
        for(int child : v[par])
        {
            if(vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
                parent[child] = par;
            }
        }
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
    int src,des;
    cin>>src>>des;
    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));
    bfs(src);
    int x = des;
    stack<int> path;
    while(x != -1)
    {
        path.push(x);
        x = parent[x];
    }
    while(!path.empty())
    {
        cout<<path.top()<<" ";
        path.pop();
    }
    return 0;
}