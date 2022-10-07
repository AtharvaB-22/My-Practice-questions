//change variables in a pointer
#include<stdio.h>
#include<stdlib.h>
int main (void) 
{ 
 int a, b, c; 
 int *p, *q, *r; 
 a = 6; 
 b = 2; 
 p = &b; 
 q = p; 
 r = &c;
 p = &a; 
 *q = 8; 
 *r = *p; 
 *r = a + *q + *&c; 
 printf("%d %d %d\n", a, b, c);
 printf("%d %d %d\n", *p, *q, *r); 
 return 0; 
}