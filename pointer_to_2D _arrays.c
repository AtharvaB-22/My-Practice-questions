//Callinga 2D array using pointers
#include<stdio.h> 
#include<conio.h> 
#define MAX_ROWS 3 
#define MAX_COLS 4 
void main(void) { 
 int i; 
 int table[MAX_ROWS][MAX_COLS] = { { 0, 1, 2, 3 }, 
 { 4, 5, 6, 7 },{ 8, 9, 10, 11 } }; 
 int *ptr=table; 
 for(i=0;i<MAX_ROWS*MAX_COLS;i++) 
 printf("%3d",*(ptr+i)); 
 return 0; 
} 
