#include<stdio.h>
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("The values of a and b are %d,%d\n",a,b);
}
int main()
{
    int a =3,b=5;
    swap(a,b);
}