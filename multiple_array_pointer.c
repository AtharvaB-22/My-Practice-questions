//Multiple array pointers
#include<stdio.h>
#include<stdlib.h>
int main() 
{ 
 int a[]={2,4,6,8,22}; 
 int i=0; 
 int *ptr=&a[1]; 
 printf("%d\t%d\n",a[1],ptr[0]); // second element
 printf("%d\t%d\n",a[0],ptr[-1]); // first element
 printf("%d\t%d\n",a[2],ptr[1]); // third element
 printf("%d\t%d\n",a[3],*(ptr+2)); // fourth element
 printf("%d\t%d\n",a[1],*(ptr--));// second element
 printf("%d\t%d\n",a[0],*ptr); // first element
 return 0; 
}