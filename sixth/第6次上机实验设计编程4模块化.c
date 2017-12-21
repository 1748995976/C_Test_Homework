#include<stdio.h>
#define N 4
#define M 3
int student_every_average(float *q,int m,int n);
int subject_every_average(float *q,float *n,char (*p)[10],int x,int y);
int below(int *m,float *n,float *q,char (*p)[10],int x,int y);
int statistics(float *q,int *l,int *h,char (*p)[10],int x,int y);
int main(void)
{
    char subject[M][10];
    float grade[N][M];
    float average_subject[M];
    char (*p)[10];
    float *q,*n=average_subject;
    int i,low[M]={[0]=0},high[M]={[0]=0}, Elow[M]={[0]=0};
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
    printf("每个学生各门课程的平均成绩：\n");
    student_every_average(q,M,N);
    printf("全班每门课程的平均成绩：\n");
    subject_every_average(q,n,p,M,N);
    printf("\n");
    printf("低于全班各门课程平均成绩的人数：\n");
    below(m,n,q,p,M,N);
    printf("\n");
    printf("全班各门课程不及格的人数和90分以上（含90分）的人数：\n");
    statistics(q,l,h,p,M,N);
    printf("\n");
    return 0;
}
int student_every_average(float *q,int m,int n)
{
    int i,b;
    float a;
    for(i=0;i<n;i++)
    {
        for(b=0,a=0;b<m;b++)
        {
            a=a+*(q+i*m+b);
        }
        printf("%.2f ",(float)(a/m));
    }
    printf("\n");
    return 0;
}
int subject_every_average(float *q,float *n,char (*p)[10],int x,int y)
{
    int b,i;
    float a;
    for(i=0;i<x;i++)
    {
        for(b=0,a=0;b<y;b++)
        {
            a=a+*(q+b*x+i);
        }
        *(n+i)=(float)(a/y);
        printf("%s:%.2f ",*(p+i),*(n+i));
    }
    return 0;
}
int below(int *m,float *n,float *q,char (*p)[10],int x,int y)
{
    int i,b;
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
    return 0;
}
int statistics(float *q,int *l,int *h,char (*p)[10],int x,int y)
{
    int i,b;
    for(i=0;i<y;i++)
    {
        for(b=0;b<x;b++)
        {
            if(*(q+i*x+b)<60)
                (*(l+b))++;
            if(*(q+i*x+b)>=90)
                (*(h+b))++;
        }
    }
    printf("不及格的人：\n");
    for(i=0;i<x;i++)
        printf("%s: %d ",*(p+i),*(l+i));
    printf("\n");
    printf("90分以上的人：\n");
    for(i=0;i<x;i++)
        printf("%s: %d ",*(p+i),*(h+i));
    return 0;
}
