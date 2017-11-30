#include<stdio.h>
int main(void)
{
    int a;
    a=getchar();
    if(a>=65&&a<=90)
        putchar(a+32);
    else
    {
            putchar(a);
            printf("\n");
    }
    return 0;
}
