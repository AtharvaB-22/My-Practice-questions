#include<stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    
}
int main()
{
    int a =3,b=5;
    swap(&a,&b);
    printf("The values of a and b are %d,%d\n",a,b);
}