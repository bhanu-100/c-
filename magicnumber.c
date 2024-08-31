#include<stdio.h>
int main()
{
 int a,b,s,x,y,z; 
 for(a=0;a<=15;a++)
   { 
       for(b=0;b<=15;b++)
       {  
             s=a*a*a+b*b*b;
   
             for(x=0;x<=15;x++)
         {
             if(x!=a,x!=b)
             for(y=0;y<=15;y++)
            {
                if(y!=b,y!=b)
                 z=x*x*x+y*y*y;
       
                 if(x!=y&&s==z)
                printf(" %d ",s);
            }
         }

       }
    }
    return 0;
}