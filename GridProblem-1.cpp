#include<bits/stdc++.h>
using namespace std;
int n,m,c=INT_MAX;
vector< vector< pair<int,int> > > v;
int dp[1000][1000];
int Min_power(int ri,int ci,int p)
{
    if(ri < 0 || ci < 0 || ri >= n || ci >= m)
    return INT_MAX;
    if(ri == n-1 and ci == m-1)
    {
        c = min(c,p);
        return c;
    }
    if( dp[ri][ci] != -1)
        return dp[ri][ci];
    int x = INT_MAX;
    for(int z=1;z<=v[ri][ci].first;z++)
        x = min(x,Min_power(ri,ci+z,p+1));
    for(int z=1;z<=v[ri][ci].second;z++)
        x= min(x,Min_power(ri+z,ci,p+1));
    dp[ri][ci] = x;
    return x;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    v.resize(n,vector< pair<int,int> >(m));
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>v[i][j].first;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>v[i][j].second;
    cout<<Min_power(0,0,0)<<endl;
    return 0;
}