#include<stdio.h>
int change(char *);
int main(void)
{
    int n, i;
    printf("�������������ַ�������:\n");
    scanf("%d",&n);
    getchar();
    printf("���濪ʼ�����ַ���\n");
    char number[n][80];
    char *p[n];
    for(i=0;i<n;i++)
        p[i]=number[i];
    for(i=0;i<n;i++)
    {
        gets(number[i]);
    }
    for(i=0;i<n;i++)
    {
        if(p[i][0]=='\n')
            continue;
        change(p[i]);
        puts(p[i]);
    }
    return 0;
}
int change(char *s)
{
    int a, i, q, e;
    for(i=0;s[i]!='\0';i++)
    {
        q=i;
        a=0;
        if(s[q]==' ')
        {
            e=q;
            for(;s[q+1]==' ';q++)
                a=1;
            for(;a==1,s[e+1]!='\0';e++,q++)
                s[e+1]=s[q+1];
        }
    }
    return 0;
}
