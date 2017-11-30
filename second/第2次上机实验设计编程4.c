#include<stdio.h>
int main(void)
{
    int a,b;

    while(scanf("%d",&a)==1&&a!=0){
        while(a!=0)
        {
            printf("%d",a%10);
            a=a/10;
        }
        printf("\n");
    }
    return 0;
}
