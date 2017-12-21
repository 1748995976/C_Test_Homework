#include<stdio.h>
int main(void)
{
    int a,b;
    int number1[3][4];
    int number2[4][3];
    for(a=0;a<3;a++){
        for(b=0;b<4;b++){
            scanf("%d",&number1[a][b]);
        }
    }
    for(a=0;a<3;a++){
        for(b=0;b<4;b++){
            printf("%4d",number1[a][b]);
        }
        printf("\n");
    }
    printf("\n");
    for(b=3;b>=0;b--){
        for(a=2;a>=0;a--){
            printf("%4d",number1[a][b]);
        }
        printf("\n");
    }
    return 0;
}
