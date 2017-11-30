#include<stdio.h>
int main(void)
{
    int b=0;
    char a;
    while(scanf("%c",&a)!=EOF)
    {
        if(a==' '&&b==0){
            putchar(a);
            b=1;}
        if(a!=' '){
            putchar(a);
            b=0;}
    }
    return 0;
}
