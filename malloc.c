#include<stdio.h> 
#include<stdlib.h> 
 int main() 
 { 
 int *ptr=(int *) malloc(2*sizeof(int)); 
 if (ptr==NULL) exit(100); 
 scanf("%d",ptr); 
 printf("%d\n",*ptr); 
 ptr++; 
 *ptr=2456; 
 printf("%d",*ptr); 
 }