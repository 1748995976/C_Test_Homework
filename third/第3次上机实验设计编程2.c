#include<stdio.h>
int main(void)
{
    int a,b,c,d,e,f=0,g=0;
    printf("����������������֤�Ĳ�С��4��ż��(ֹͣ����ֹͣ�����������):\n");
    while(scanf("%d",&a)==1){
        d=2;
        b=3;
        if(a<4||a%2!=0){
            printf("�����벻С��4��ż��:\n");
            continue;
        }
        else
        for(;;){
            if(a==4){
                printf("�������������������е���������Ϊ:1 3\n");
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
            printf("�������������������е���������Ϊ:%d %d\n",b,c);
            f=0;
            g=0;
        }
    }
    return 0;
}
