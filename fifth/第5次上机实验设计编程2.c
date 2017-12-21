#include<stdio.h>
int main(void)
{
    int a = 1;
    int b ,c ,d;
    scanf("%d",&b);
    int number[32];
    for(c=0;c<32;c++){
        b=b>>c;
        number[c]=(b&a);
    }
    for(d=31;d>=0;d--){
        printf("%d ",number[d]);
    }
    return 0;
}
