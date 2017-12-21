#include<stdio.h>
int strnins(char words1[],char words2[],int n);
char * s_gets(char * st, int n);
int main(void)
{
    int a;
    char words1[31];
    char words2[11];
    s_gets(words1,11);
    s_gets(words2,11);
    scanf("%d",&a);
    strnins(words1,words2,a);
    puts(words1);
    return 0;
}
char * s_gets(char * st, int n)
{
    char * ret_val;
    int i=0;
    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if(st[i] == '\n')
            st[i] = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}
int strnins(char words1[],char words2[],int i)
{
    int q;
    for(q=0;;i++,q++){
        words1[i] = words2[q];
        if(words2[q] == '\0')
            break;
    }
    return 0;
}
