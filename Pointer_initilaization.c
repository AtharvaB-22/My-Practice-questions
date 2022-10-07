//wap to understand initialization of a pointer
#include<stdio.h>
#include<stdlib.h>
int main(void) 
{ 
int a; 
int *p = &a; 
a=15; 
 
printf("Address of a: %p\n", p);
 
printf("Address of ptr_a: %p\n", &p);
 
printf("Address of a: %p\n", &a); 
 
printf("value of a: %d\t%d\n", a,*p);
 
return 0;
} 