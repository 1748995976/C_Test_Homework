#include<stdio.h>
int main(void)
{
    double x;
    int y;
    printf("����������������:\n");
    scanf("%lf",&x);
    y=x/1000;
    switch(y){
    case 0:printf("����Ӧ���ɵĵ�˰Ϊ:0.00Ԫ\n");break;
    case 1:printf("����Ӧ���ɵĵ�˰Ϊ:%0.2lfԪ\n",x*0.05);break;
    case 2:printf("����Ӧ���ɵĵ�˰Ϊ:%0.2lfԪ\n",x*0.10);break;
    case 3:printf("����Ӧ���ɵĵ�˰Ϊ:%0.2lfԪ\n",x*0.15);break;
    case 4:printf("����Ӧ���ɵĵ�˰Ϊ:%0.2lfԪ\n",x*0.20);break;
    default:printf("����Ӧ���ɵĵ�˰Ϊ:%0.2lfԪ\n",x*0.25);
    }
}
