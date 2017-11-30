#include<stdio.h>
int main(void)
{
    double x;
    while(scanf("%lf",&x)==1&&x!=0){
        if(x<=1000)
            printf("0.000000\n");
        if(x>1000&&x<=2000)
            printf("%0.6lf\n",(x-1000)*0.05);
        if(x>2000&&x<=3000)
            printf("%0.6lf\n",(x-2000)*0.10+50);
        if(x>3000&&x<=4000)
            printf("%0.6lf\n",(x-3000)*0.15+100+50);
        if(x>4000&&x<=5000)
            printf("%0.6lf\n",(x-4000)*0.20+150+100+50);
        if(x>5000)
            printf("%0.6lf\n",(x-5000)*0.25+200+150+100+50);
    }
    return 0;
}
