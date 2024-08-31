#include<stdio.h>
int main()
{
    int a,b,c,p,q;
    
     for(a=1;a<=9;a++)
    {
        for(b=0;b<=9;b++)
        {
            for(c=0;c<=9;c++)
            {
            p=100*a+10*b+c;
            q=a+b+c;
            if( p%q==0 )
            printf("  %d%d%d  ",a,b,c);
            }

        }
    }
    return 0;

}
