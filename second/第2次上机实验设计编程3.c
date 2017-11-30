#include<stdio.h>
unsigned long long int number(int a);
unsigned long long int outcome(int a,int b);
int main(void)
{
    int a,b,c,d;
    for(;;){
        scanf("%d",&a);
        if(a==0)
            break;
        b=0;
        while(b<=(a-1))
        {
            c=0;
            for(d=0;d<(2*(a-1)-b*2);d++)
                putchar(' ');
            while(c<=b)
            {
                number(c);
                if(c==0){
                    printf("%llu",outcome(b,c));
                    c++;
                    continue;
                }
                printf("%4llu",outcome(b,c));
                c++;
            }
            printf("\n");
            b++;
        }
    printf("\n");
    }
    return 0;
}
unsigned long long int number(int a)
{
    int b,c=1;
    if(a==0)
        b=1;
    else
        for(b=1;b<=a;b++)
        c=c*b;
    return c;
}
unsigned long long int outcome(int a,int b)
{
    unsigned long long int c;
    c=(number(a)/number(b))/number(a-b);
    return c;
}
