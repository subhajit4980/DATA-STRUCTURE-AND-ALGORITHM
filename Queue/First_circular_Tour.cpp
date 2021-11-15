#include<bits/stdc++.h>
using namespace std;

int firstpetrolpamp(int petrol[],int dist[], int n)
{
    int start=0,curr_ptr=0,prev_ptr=0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        curr_ptr+=petrol[i]-dist[i];
        if(curr_ptr<0){
            start=i+1;
            prev_ptr+=curr_ptr;
            curr_ptr=0;
        }
    }
    return((curr_ptr+prev_ptr)>=0)?(start+1):-1;    
}
int main(){
    int petrol[]={50,10,60,100};
    int dist[]={30,20,100,10};
    int n=sizeof(petrol)/sizeof(petrol[0]);
    int result=firstpetrolpamp(petrol,dist,n);
    cout<<"start from petrol pamp "<<petrol[result-1]<<endl;
    return 0;
}