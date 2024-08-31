#include<stdio.h>
int main()
{
    int x,y,t=1;
    printf("Enter base and exponent\n");
    scanf("%d%d",&x,&y);
    while( y != 0 )
     {
       t *= x;
       --y;
     }
     printf("%d\n",t);
    return 0;
}