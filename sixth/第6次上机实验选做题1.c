#include<stdio.h>
#define N 20
#define M 10
int main(void)
{
    int i;
    char number1[M+N+2],number2[M+N+2],number[M+N+2]={[0]=0};
    printf("输入你想计算的两个数：\n");
    scanf("%s",number1);
    scanf("%s",number2);
    for(i=M+N+1;i>=1;i--)
    {
        number1[i]=number1[i-1];
        number2[i]=number2[i-1];
    }
    for(i=M+N+1;i>=1;i--)
    {
        if(number1[i]=='.')
        {
            number[i]='.';
            continue;
        }
        number[i]=number[i]+number1[i]+number2[i]-48;
        if(number[i]>57)
        {
            if(number1[i-1]=='.')
                number[i-2]=1;
            else
            {
                number[i-1]=1;
            }
            number[i]=number[i]-10;
        }
    }
    if(number[0]=='1')
        for(i=0;i<M+N+2;i++)
        printf("%c",number[i]);
    else
        for(i=1;i<M+N+2;i++)
        printf("%c",number[i]);
    return 0;
}
