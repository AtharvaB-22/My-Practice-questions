//Finding the smallest number in an array using a pointer
#include<stdio.h>
#include<stdlib.h>
#define arrzy_size 5 
int main() 
{ 
 int a[]={32,8,14,22,20}; 
 int *psm,*plast,*pwalk; 
 plast=a+arrzy_size-1;psm=a; //directly assigning values
 for(pwalk=a+1;pwalk<=plast;pwalk++) 
 if(*pwalk<*psm) 
 psm=pwalk; 
 printf("the smallest element %d",*psm); 
 return 0; 
}