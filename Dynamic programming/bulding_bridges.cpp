#include<bits/stdc++.h>
using namespace std;
int bridges(vector<pair<int,int>>&temp,int n)
{
    sort(temp.begin(),temp.end());
    vector<int> dp(n+1,INT_MAX);
    int ans =0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        int idx=lower_bound(dp.begin(),dp.end(),temp[i].second)-dp.begin();
        dp[idx]=temp[i].second;
        ans=max(ans,idx+1);
    }
    return ans;
}
int main()
{
    vector<pair<int,int>> bridges_com;
    int n;
    cout<<"enter the no pairs"<<endl;
    cin>>n;
        // const x,y;
    for (int i = 0; i < n; i++)
    {
        /* code */
        int x,y;
        // cin>>bridges_com[i].first>>bridges_com[i].second;
        cin>>x>>y;
        bridges_com.push_back(make_pair(x,y));
    }
    int s=bridges(bridges_com,n);
 cout<<"no of bridges "<<s;
 return 0;   
}