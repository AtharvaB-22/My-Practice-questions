//passsing pointer as a parameter
#include<stdio.h>
#include<stdlib.h>
void exchange(int *px,int *py)
{
    int temp;
    temp=*px;
    *px=*py;
    *py=temp;
}
int main()
{
    int a=5,b=7;
    exchange(&a,&b);
    printf("%d\t %d\n",a,b);
    return 0;
}