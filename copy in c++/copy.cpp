#include<bits/stdc++.h>
using namespace std;
// normal copy is called as shallow copy
class cop
{
private:
    /* data */
    int a,b;
public:
    cop(int x,int y)// initialize value with constructor
    {
        a=x;
        b=y;
    }
    void show()// print the values
    {
        cout<<"a :"<<a<<" b :"<<b;
    }
    // it is copy constructor which is define default for copying or shallow copy
    cop(const cop &c)
    {
        a=c.a;
        b=c.b;
    }
};
int main()
{
    cop c1(34,67);
    cop c2=c1;// use copy constructor
    // we can use any one of copy constructor or implicit assignment operator
    c2=c1; // implicit assignment operator
    c2.show();
    return 0;

}
