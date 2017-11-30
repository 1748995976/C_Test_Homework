#include<stdio.h>
#define S(x,y,z) (x+y+z)/2
#define p S(x,y,z)
#define area(p,x,y,z) sqrt(p*(p-x)p(p-y)*(p-z))
void main(void)
{
    int a,b,c,p;
    printf("请输入三角形的三条边的边长:\n");
    scanf("%d %d %d,&a,&b,&c");
    printf("s=%d,area=%d",S(a,b,c),area(p,a,b,c));
}
