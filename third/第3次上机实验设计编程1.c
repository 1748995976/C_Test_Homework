#include<stdio.h>
int maths(int a,int b);
int main(void)
{
    int a,b;
    while(scanf("%d %d",&a,&b)==2&&a!=0){
        printf("%d\n",maths(a,b));
    }
    return 0;
}
int maths(int a,int b)
{
    int c,d;
    if(a<b)
    {
        c=a;
        a=b;
        b=c;
    }
    if(a%b==0)
        return b;
    else
    {
        d=a%b;
        a=b;
        b=d;
        maths(a,b);
    }
    return maths(a,b);
}
