#include<stdio.h>
int main()
{
    int a,b,c;
    for(a=1;a<=9;a++)
    {
        for(b=0;b<=9;b++)
        {
            for(c=0;c<=9;c++)
            if(a==c)
            printf("  %d%d%d  ",a,b,c);
        }
    }
    return 0;

}