#include<bits/stdc++.h>
using namespace std;
int n,m,c=INT_MAX;
vector< vector< pair<int,int> > > v;
void Min_power(int ri,int ci,int p)
{
    if(ri < 0 || ci < 0 || ri >= n || ci >= m)
    return ;
    if(ri == n-1 and ci == m-1)
    {
        c = min(c,p);
        return;
    }

    for(int z=1;z<=v[ri][ci].first;z++)
        Min_power(ri,ci+z,p+1);
    for(int z=1;z<=v[ri][ci].second;z++)
        Min_power(ri+z,ci,p+1);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    v.resize(n,vector< pair<int,int> >(m));
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>v[i][j].first;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>v[i][j].second;
    Min_power(0,0,0);
    cout<<c<<endl;
    return 0;
}