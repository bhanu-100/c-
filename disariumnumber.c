#include<stdio.h>
int main()
{
    int a,b,c;
    
     for(a=1;a<=9;a++)
    {
        for(b=0;b<=9;b++)
        {
            for(c=0;c<=9;c++)
            if(a+b*b+c*c*c == 100*a+10*b+c)
            printf("%d%d%d\n",a,b,c);

        }
    }
    return 0;

}
