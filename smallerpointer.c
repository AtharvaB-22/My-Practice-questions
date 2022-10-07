//smaller pointer
#include<stdio.h>
#include<stdlib.h>
int smaller(int *x,int *y)
{
    if(*x<*y)
    return x;
    else
    return y;
}
int main()
{
    int a=5,b=7;
    int *c;
    c=smaller(&a,&b);
    printf("%p\n",c);
    return 0;
}