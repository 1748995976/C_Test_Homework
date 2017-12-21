#include "stdio.h"
void main(void)
{
    float *p, a;
    scanf("%f",&a);
    p=&a;
    printf("%f\n",*p);
}
