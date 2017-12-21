#include<stdio.h>
#include<string.h>
int main(void)
{
    char * (*p[2])(const char *,const char *);
    int i;
    p[0]=strcmp;
    p[1]=strstr;
    char words1[61],words2[31];
    printf("Please input words A\n");
    for(i=0;(words1[i]=getchar())!='\n';i++);
    words1[i]='\0';
    printf("Please input words B\n");
    for(i=0;(words2[i]=getchar())!='\n';i++);
    words2[i]='\0';
    if(p[0](words1,words2)==0)
        printf("They are same\n");
    else
        printf("They are not same\n");
    if(p[1](words1,words2)!=NULL)
        printf("B¡ÉA=B\n");
    else
        printf("B¡ÉA¡ÙB\n");
    return 0;
}
