#include<bits/stdc++.h>
using namespace std;
       int superEggDrop(int K, int N) {
        //    K=number of eggs and N= number of floors
        if(N==0||N==1) return N;     //Think for base case
        if(K==1) return N;
        
        // vector<vector<int>> dp(K+1,vector<int> (N+1,0));
        int dp[K+1][N+1];
      for(int i=0;i<=K;i++)
        dp[i][0]=0,dp[i][1]=1;   //Filling from base case as if N==0 ans=0 , N==1 ans=1
      for(int i=0;i<=N;i++)
        dp[0][i]=0,dp[1][i]=i;   //Filling from base case as if K==0 ans=0 , K==1 ans=N, number of current floor (i)
        
        for(int i=2;i<K+1;i++)
        {
            for(int j=2;j<N+1;j++)
            {    int l=1,h=j,temp=0,ans=1e9;
            // using binary search
                 while(l<=h)
                 {
                    int mid=(l+h)/2;
                    // assume 1st mid is the threshold point or critical point
                    int left= dp[i-1][mid-1]; //egg broken check for down floors of mid so number of eggs and floor will decrease
                    int right= dp[i][j-mid];  // not broken check for up floors of mid so number of eggs and floor will increase
                    temp=1+max(left,right);          //store max of both 
                    if(left<right){                  //since right is more than left and we need more in worst case 
                      l=mid+1;                       // so l=mid+1 to gain more temp for worst case : upward
                    }
                    else                             //left > right so we will go downward 
                    {    
                        h=mid-1;
                    }
                    ans=min(ans,temp);               //store minimum attempts
                 }
                 dp[i][j]=ans;
            }
        }
        return dp[K][N];
         
    }
    int main()
    {
        int k,n;
        cin>>k>>n;
        cout<<superEggDrop(k,n);
        return 0;
    }