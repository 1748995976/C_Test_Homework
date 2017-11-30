#include<stdio.h>
int main(void)
{
    int a=1,d;
    scanf("%d",&d);
    unsigned long int b,c;
    for(;a<=d;a++){
        c=255;
        scanf("%lu",&b);
        printf("%lu.",b&c);
        printf("%lu.",(b>>8)&c);
        printf("%lu.",(b>>16)&c);
        printf("%lu\n",(b>>24)&c);
    }
    return 0;
}
