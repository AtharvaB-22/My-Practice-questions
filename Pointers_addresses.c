//wap to print the pointer address 
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p;
    *p=100;
    printf("%p",*p);// p gives address
    //*p gives value 100
}