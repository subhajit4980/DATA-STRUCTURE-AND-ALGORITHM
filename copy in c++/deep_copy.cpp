#include<bits/stdc++.h>
using namespace std;

class cop
{
private:
    /* data */
    int a,b;
    int * p;
public:
    cop(int x,int y,int z)// initialize value with constructor
    {
        a=x;
        b=y;
        p=new int;// create a p block to store the address of the p pointer
        *p=z;
    }
    void show()// print the values
    {
        cout<<"a :"<<a<<" b :"<<b<<" c: "<<*p;
    }
    // it is copy constructor which is not define default for deep copying 
    cop(const cop &c)
    {
        a=c.a;
        b=c.b;
        p=new int;
        *p=*(c.p);
    }
};
int main()
{
    cop c1(34,67,90);
    cop c2=c1;// use copy constructor
    // we can use any one of copy constructor or implicit assignment operator
    c2=c1; // implicit assignment operator
    c2.show();
    return 0;

}
