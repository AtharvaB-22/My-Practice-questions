//Array as a pointer
#include<stdio.h>
#include<stdlib.h>
int main() 
{ 
 int a[]={2,4,6,8,22}; 
 int i=0; 
 int *ptr=a; 
 for(i=0;i<5;i++) 
 { 
 printf("%d\t%d\n",a[i],*ptr);// here a[i] and *ptr is showing the same values 
 ptr++; 
 } 
 return 0; 
} 