//Passing array as a pointer
#include<stdio.h>
#include<stdlib.h>
void multiply(int *pary,int psize)
{
    int *pwalk;
    int *plast;
    plast=pary+psize-1;
    for(pwalk=pary;pwalk<=plast;pwalk++)
        *pwalk=*pwalk*2;
}
int main()
{
    int arr={1,2,3,4,5};
    int *plast;
    int *pwalk;
    plast=arr+5-1;
    multiply(arr,5);
    printf("The doubled value is %d \n",*pwalk);
    return 0;
}