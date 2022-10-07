// reverse array using pointers
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void rev(int *arr, int size)
{

}
int main()
{
    int size =5;
    int *arr[size];
    int i;
    for(i=0;i<size;i++)
    scanf("%d\n",(&arr[i]));
    for(i=0;i<size;i++)
    printf("%d\n",*arr[i]);
    
}