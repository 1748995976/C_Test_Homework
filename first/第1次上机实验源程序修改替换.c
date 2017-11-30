#include<stdio.h>
void main(void)
{
    int a,b,t;
    printf("Input two integers:");
    scanf("%d %d",&a,&b);
    a=b-a;
    b=b-a;
    a=a+b;
    printf("\na=%d,b=%d",a,b);
}
