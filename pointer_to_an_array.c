//pointer_to an_array
#include<stdio.h>
#include<stdlib.h>
int main() 
{ 
 int a[10]={2,4,6,8,22}; 
 int *ptr; 
 printf("%d",*a); 
// a++; //invalid 
 ptr=a+1; 
 printf("%3d",*ptr); 
 ptr++; 
 printf("%3d%3d",*ptr,*(a+2)); 
 return 0; 
}