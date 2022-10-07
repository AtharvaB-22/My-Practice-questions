#include<stdio.h> 
#include<stdlib.h> 
 int main() 
 { 
 int i; 
 int *ptr=(int *) calloc(5,sizeof(int)); 
 if (ptr==NULL) exit(100); 
 for(i=0;i<5;i++) 
 scanf("%d",(ptr+i)); // inputting array of numbers
 for(i=0;i<5;i++) 
 printf("%d\n",*(ptr+i)); 
 //for(i=0;i<5;i++) 
 //printf("%d\n",ptr[i]); 
 } 