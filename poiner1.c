#include<stdio.h>
int main()
{
    int x=1;
    printf("%d\n",x);
    printf("%u",&x);
    printf("%d",*&x);
    return 0;
}