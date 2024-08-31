#include<stdio.h>
int swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
    return 0;
}
int swap(int *,int *);
void main()
{
    int a,b;
    printf("Enter two number\n");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("a=%d and b=%d\n",a,b);
}
