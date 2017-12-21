#include<stdio.h>
#include<math.h>
#define S(x,y,z) (x+y+z)/2
#define area(p,x,y,z) sqrt(p*(p-x)*(p-y)*(p-z))
int main(void)
{
    double a,b,c,d;
    while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF){
        d=S(a,b,c);
        printf("s=%0.0lf,area=%0.6lf\n",d,area(d,a,b,c));
    }
    return 0;
}
