//maxnumber using a pointer
void max(int a,int b,int *max)
{
    if(a>b)
    *max=a;
    else
    *max=b;
}
void main()
{
    int a=5,b=3;
    int maxi;
    max(a,b,&maxi);
    printf("max is %d",maxi);
}
