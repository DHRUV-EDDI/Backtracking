#include<bits/stdc++.h>
using namespace std;
map<int, vector<int> > mp;
int ans=INT_MAX,c1=0;
vector< vector<int> > cost;
void MinPaths(int strt,int end,int res)
{
    if( strt == end)
    {
        if(res == ans)
            c1++;
        else
            c1=1;
        ans = min(ans,res);
        return;
    }
    if( mp[strt].size() == 0)
        return;
    for(int i=0;i<mp[strt].size();i++)
    {
        int x = mp[strt].at(i);
        MinPaths(x,end,(res + cost[strt-1][x-1]));
    }
}
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        int u,v,c;
        mp.clear();
        cost.clear();
        cin>>n>>m;
        cost.resize(n, vector<int>(n) );
        while(m--)
        {
            cin>>u>>v>>c;
            mp[u].push_back(v);
            cost[u-1][v-1] = c;
        }
        c1=0;
        ans = INT_MAX;
        MinPaths(1,n,0);
        cout<<c1<<endl;
    }
    return 0;
}
