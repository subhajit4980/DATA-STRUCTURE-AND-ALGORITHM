#include<bits/stdc++.h>
using namespace std;
int getmin(int arr[],int n,int val)
{
    int dp[val+1];
    dp[0]=0;
    for (int i = 1; i <=val; i++)
    {
        /* code */
        dp[i]=INT_MAX;
    }
    for (int i = 1; i <=val; i++)
    {
        /* code */
        for (int j = 0; j < n; j++)
        {
            /* code */
            if(arr[j]<=i)
            {
                int sub_res=dp[i-arr[j]];
                if(sub_res!=INT_MAX)
                {
                    dp[i]=min(dp[i],sub_res+1);
                }
            }
        
        }
        
    }
    if(dp[val]==INT_MAX)
    {
        return -1;
    }
    return dp[val];
    
}
int main()
{
    int coin[]={2};
    int n= sizeof(coin)/sizeof(coin[0]);
    int res=getmin(coin,n,3);
    cout<<"minimum coins required to get 5 are "<<res;
}