#include<stdio.h>
int main(void)
{
    int a,b,c,d,e,f=0,g=0;
    int BEGIN,END;
    while(scanf("%d %d",&BEGIN,&END)==2&&BEGIN!=0){
            if(BEGIN%2==1)
                BEGIN++;
            if(END%2==1)
                END--;
    while(BEGIN<=END){
        d=2;
        b=3;
        a=BEGIN;
    for(;;){
        if(a==4){
            printf("满足条件的素数中其中的两个素数为:1 3\n");
            break;
        }
        if(b%d!=0)
            d++;
        else{
            b++;
            d=2;
            continue;
        }
        if(d==b){
            c=a-b;
            f=1;
            e=2;
            for(;;){
                if(c%e!=0)
                    e++;
                else{
                    b++;
                    d=2;
                    break;
                }
                if(e==c){
                    g=1;
                }
                if(g==1&&f==1)
                    break;
            }
        }
        if(f==1&&g==1)
            break;
    }
    if(f==1&&g==1){
        printf("%d=%d+%d\n",BEGIN,b,c);
        f=0;
        g=0;
        }
    BEGIN=BEGIN+2;
    }
    printf("\n");
    }
    return 0;
}
