// To find a character Stack
#include<stdio.h>
#include<stdlib.h>
#define max 5
typedef struct 
{
    char st[max];
    int top;
}STACK;
int isfull(int *top)
{
    if((*top)==max-1)
    return 1;
    else 
    return 0;
}
int isEmpty(int *top)
{
    if((*top)==-1)
    return 1;
    else
    return 0;
}
void push(STACK* s,char ele)
{
    s->st[(s->top)+1];
}
char pop(STACK *s)
{
    char dis;
    dis=s->st[(s->top)-1];
    return dis;
}
void display(STACK *s)
{
    printf("The Stack Elements are :\n");
    for(int i=s->top;i>=0;i--)
    printf("%c\n",s->st);
}
int main()
{
    STACK *s;
    calloc(1,sizeof(STACK));
    s->top=-1;
    int c;
    char ele;
    // 1 for push 2 for pop 3 for display 4 for exit
}