#include<stdio.h>
int main( void )
{
    unsigned short int  x,m,n,q;
    int a=1,b;
    scanf("%d",&b);
    for(;a<=b;a++){
        scanf("%hu %hu %hu",&x,&m,&n);
        if (m>=0&&m<=15&&n>=1&&n<=(16-m))
            printf("%hu\n",(x>>m)<<(16-n));
    }
    return 0;
}
