#include<stdio.h>
//double niudun(double a);
int main(void)
{
    double a,b;
    a=1;
    b=0;
    while((a-b>0.000001)||(a-b<-0.000001))
    {
        b=a-(3*a*a*a-4*a*a-5*a+13)/(9*a*a-8*a-5);
        a=b-(3*b*b*b-4*b*b-5*b+13)/(9*b*b-8*b-5);
    }
    printf("%lf",a);
    //printf("%lf",niudun(a));
    return 0;
}
/*double niudun(double a)
{
    double b;
    b=a-(3*a*a*a-4*a*a-5*a+13)/(9*a*a-8*a-5);
    if((b-a>=-0.000001)&&(b-a<=0.000001))
        return b;
    a=b;
    return niudun(a);
}*/
