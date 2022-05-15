#include<bits/stdc++.h>
using namespace std;

void celing(int arr[],int x)
{
    set<int> s;
    cout<<"-1"<<" ";
    s.insert(arr[0]);
    for (int i = 1; i < x; i++)
    {
        if(s.lower_bound(arr[i])!=s.end())
        {
            cout<<*(s.lower_bound(arr[i]))<<" ";
        }
        else{
            cout<<"-1"<<" ";
        }
        s.insert(arr[i]);
    }
}
int main()
{
    int arr[]={12,32,45,23,10,11};
    int n= sizeof(arr)/sizeof(arr[0]);
    celing(arr,6);
    return 0;
}