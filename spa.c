//to find the sum, product,average of two numbers
#include<stdio.h>
void math(int a,int b,int *sum,int *pdt,int *avg)
{
    *sum=a+b;
    *pdt=a*b;
    *avg=(a+b)/2;
}
int main()
{
    int a=6,b=8;
    int sum,pdt,avg;
    math(a,b,&sum,&pdt,&avg);
    printf("THE VALUES ARE:%d,%d,%d\n",sum,pdt,avg);
}