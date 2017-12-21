#include<stdio.h>
#define CHANCE 0
int main(void)
{
    int i=0,g=0,a;
    char words[1000];
    while(a=getchar()){
        if(a=='\n')
            break;
        words[i]=a;
        i++;
    }
    words[i]='\0';
    #if CHANCE == 0
        puts(words);
    #elif CHANCE == 1
        for(;;){
            if(g==i)
                break;
            if(words[g]>=97&&words[g]<=122)
                words[g]=words[g]-32;
            g++;
        }
        puts(words);
    #endif
    return 0;
}
