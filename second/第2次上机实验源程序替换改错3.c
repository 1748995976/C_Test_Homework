#include <stdio.h>
void main(void)
{
    int i,S,n=1,x=1;
    printf("Please enter S:");
    scanf("%d",&S);
    while(x<S)
    {
        ++n;
        x=x*n;
    }
    printf("n=%d",n);
}
