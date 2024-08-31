#include<stdio.h>
int main()
{
    char a[15],i;
    printf("enter your name\n");
    for(i=0;i<=14;i++)
    scanf("%c",&a[i]);
    printf("%s\n",a);
    return 0;
}