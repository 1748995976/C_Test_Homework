#include<stdio.h>
int main(void)
{
    double x;
    int y;
    printf("请输入您的月收入:\n");
    scanf("%lf",&x);
    y=x/1000;
    switch(y){
    case 0:printf("你所应缴纳的的税为:0.00元\n");break;
    case 1:printf("你所应缴纳的的税为:%0.2lf元\n",x*0.05);break;
    case 2:printf("你所应缴纳的的税为:%0.2lf元\n",x*0.10);break;
    case 3:printf("你所应缴纳的的税为:%0.2lf元\n",x*0.15);break;
    case 4:printf("你所应缴纳的的税为:%0.2lf元\n",x*0.20);break;
    default:printf("你所应缴纳的的税为:%0.2lf元\n",x*0.25);
    }
}
