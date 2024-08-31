#include<stdio.h>
int main()
{
    int x=1,y;
    while(x<=6)
    {
        printf("Enter The Number\n");
       scanf("%d",&y);
       if(y>0)
       break;
       x++;
    }
x==7?printf("end programm\n"):printf("break\n");
return 0;
}