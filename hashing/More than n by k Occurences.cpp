#include <bits/stdc++.h>
using namespace std;


void printDistinct(int arr[], int n, int k)
{
    map<int, int> m; //create empty hashmap
   
    for (int i = 0; i < n; i++) { 
        m[arr[i]] ++; //insert key and value in hashmap
    } 
    for(auto x : m)
    {
        if(x.second>n/k) // check value is greater than k 
        std::cout << x.first << std::endl; // print the key
    }

    
}
int main()
{
    int arr[]={10,34,10,23,34,10,10,34};
    int k=4;
    int n= sizeof(arr)/sizeof(arr[0]);
    printDistinct(arr,n,k);
    return 0;
}
//time complexity is theta(n)