#include<stdio.h>
#define N 4
#define M 3
int main(void)
{
    char subject[M][10];
    float grade[N][M];
    float average_subject[M];
    char (*p)[10];
    float *q,*n=average_subject,a;
    int i, b, low[M]={[0]=0},high[M]={[0]=0}, Elow[M]={[0]=0};
    int *m=Elow,*l=low,*h=high;
    p=subject;
    q=grade[0];
    for(i=1;i<=M;i++,p++)
    {
        scanf("%s",*p);
    }
    p=subject;
    for(i=0;i<N*M;i++,q++)
    {
        scanf("%f",q);
    }
    q=grade[0];
    printf("ÿ��ѧ�����ſγ̵�ƽ���ɼ���\n");
    for(i=0;i<N;i++)
    {
        for(b=0,a=0;b<M;b++)
        {
            a=a+*(q+i*M+b);
        }
        printf("%.2f ",(float)(a/M));
    }
    printf("\n");
    printf("ȫ��ÿ�ſγ̵�ƽ���ɼ���\n");
    for(i=0;i<M;i++)
    {
        for(b=0,a=0;b<N;b++)
        {
            a=a+*(q+b*M+i);
        }
        *(n+i)=(float)(a/N);
        printf("%s:%.2f ",*(p+i),*(n+i));
    }
    printf("\n");
    printf("����ȫ����ſγ�ƽ���ɼ���������\n");
    for(i=0;i<N;i++)
    {
        for(b=0;b<M;b++)
        {
            if(*(q+i*M+b)<*(n+b))
                *(m+b)=*(m+b)+1;
        }
    }
    for(i=0;i<M;i++)
        printf("%s:%d ",*(p+i),*(m+i));
    printf("\n");
    printf("ȫ����ſγ̲������������90�����ϣ���90�֣���������\n");
    for(i=0;i<N;i++)
    {
        for(b=0;b<M;b++)
        {
            if(*(q+i*M+b)<60)
                (*(l+b))++;
            if(*(q+i*M+b)>=90)
                (*(h+b))++;
        }
    }
    printf("��������ˣ�\n");
    for(i=0;i<M;i++)
        printf("%s: %d ",*(p+i),*(l+i));
    printf("\n");
    printf("90�����ϵ��ˣ�\n");
    for(i=0;i<M;i++)
        printf("%s: %d ",*(p+i),*(h+i));
    printf("\n");
    return 0;
}
