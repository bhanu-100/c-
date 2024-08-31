#include<stdio.h>
int main()
{
    int x;
    printf("enter the number\n");
    scanf("%d",&x);
    if(x>0)
    {
        printf("positive number\n");
    }
    if(x<=0)
    {
        printf("non positive\n");
    }
    return 0;
}