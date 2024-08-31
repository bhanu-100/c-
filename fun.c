//take something return simething
#include<stdio.h>
int add(int,int);
int main()
{
    int x,y,s;
    printf("\nEnter two number\n");
    scanf("%d%d",&x,&y);
    s=add(x,y);
    printf("\nsum is %d\n",s);
    return 0;
}
int add(int a,int b)
{
    return(a+b);
}