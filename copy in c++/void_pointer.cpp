
#include<stdio.h>
int main()
{
    int a = 10;
    void *ptr = &a;
    // ptr=ptr;
    printf("%d", *(int *)ptr);
    int b[3]={1,2,3};
    void *ptr1=&b;
    ptr1=ptr1+sizeof(int);
    printf("  \nsecond part %d", *(int *)ptr1);
    return 0;
}