#include<bits/stdc++.h>
using namespace std;
vector<int>level;
vector<int>visited;

void bfs(int u)
{
    level[u]=0;
    visited[u]=1;
    queue<int>Q;
    Q.push(u);
    while(!Q.empty())
    {
        u=Q.front();
        for(int i=0; i<G[u].size(); i++)
        {
            int v = G[u][i];
            if(visited[v]==0)
            {
                visited[v]=1;
                level[v]=level[u]+1;
                Q.push(v);
            }
        }
        Q.pop();
    }
}

int main()
{
    int nod,edg, i,j,a,b;
    while(cin>>nod>>edg)
    {
        vector<int>v[nod+5];
        for(i=1; i<=edg; i++)
        {
            cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
int ch;
cin>>ch;
bfs(ch);
        for(i=1; i<=nod; i++)
        {
            cout<<"Node "<<i<<" : ";
            for(j=0; j<v[i].size(); j++)
            {
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
    }

}
