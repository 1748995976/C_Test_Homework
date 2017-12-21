#include<stdio.h>
int main(void)
{
    long int a, b, c=1, d, e, f, g=0;
    long int number[8],all[32];
    scanf("%ld",&b);
    for(d=0,e=28;e>=4;d++,e=e-8)
    {
        a=15;
        number[d]=(b>>e)&a;
    }
    for(e=24;e>=0;d++,e=e-8)
    {
        a=15;
        number[d]=(b>>e)&a;
    }
    for(a=1,c=0;c<8;c++)
    {
        for(f=3;f>=0;f--,g++)
        {
            all[g]=(number[c]>>f)&a;
        }
    }
    for(a=0;a<g;a++)
        printf("%ld",all[a]);
    return 0;
}
