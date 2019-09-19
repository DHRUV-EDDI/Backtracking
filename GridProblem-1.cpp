#include<bits/stdc++.h>
using namespace std;
int n,m,c=INT_MAX;
int dp[1000][1000];
vector< vector< pair<int,int> > > v;
long  Min_power(int ri,int ci)
{
    if(ri < 0 || ci < 0 || ri >= n || ci >= m)
    return INT_MAX;
    if(ri == n-1 and ci == m-1)
        return 0;
    if(dp[ri][ci]!=-1)
    return dp[ri][ci];
    long ret=INT_MAX;
    for(int z=1;z<=v[ri][ci].first;z++)
        ret=min(ret,1+Min_power(ri,ci+z));
    for(int z=1;z<=v[ri][ci].second;z++)
        ret=min(ret,1+Min_power(ri+z,ci));
        return dp[ri][ci]=ret;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    memset(dp,-1,sizeof(dp));
    v.resize(n,vector< pair<int,int> >(m));
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>v[i][j].first;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>v[i][j].second;
    c=Min_power(0,0);
    cout<<c<<endl;
    return 0;
}