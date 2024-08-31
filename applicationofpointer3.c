#include<stdio.h>
char* reverse(char*);
void main()
{
printf("%s",reverse("computer"));
}
char* reverse(char *p)
{
    int i, l;
    char ch;

    for(l=0;*(p+l)!='\0';l++);
    for(i=0;i<l/2;i++)
    {
     ch=*(p+i);
     *(p+i)=*(p+l-1+i);
     *(p+l-1+i)=ch;
    }
    return(p);
}
