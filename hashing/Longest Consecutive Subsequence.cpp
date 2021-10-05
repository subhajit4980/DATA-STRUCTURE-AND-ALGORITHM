#include <bits/stdc++.h>
using namespace std;
//time _Complexity= theta(n)
// lookups=2n
// 1st lookups =2+(lenth-1)
// others lookups=1

int longestsubseq(int arr[],int n)
{
    unordered_set<int> hs;
     
    for (int i = 0; i < n; i++)
        hs.insert(arr[i]);
        
        int res=1;
        for (auto i:hs) {
            if(hs.find(i-1)==hs.end())
            {
                int curr=1;
                while(hs.find(i+curr)!=hs.end())
                {
                    curr++;
                    res=max(res,curr);
                }
            }
        }
        return res;
}
int main() {
	int arr[]={1,5,8,2,6,3,9,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	std::cout << longestsubseq(arr,n) << std::endl;
	return 0;
}