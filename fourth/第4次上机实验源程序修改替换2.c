#include<stdio.h>
#define max(x,y,z) (((x>y)?x:y)>z)?((x>y)?x:y):z
float sum(float x, float y);
void main(void)
{
    int a, b, c;
    float d, e;
    printf("Enter three integers:");
    scanf("%d %d %d",&a,&b,&c);
    printf("\nthe maximum of them is %d\n",max(a,b,c));
    printf("Enter two floating point numbers:");
    scanf("%f %f",&d,&e);
    printf("\nthe sum of them is  %f\n",sum(d,e));
}
float sum(float x, float y)
{
  return x+y;
}
