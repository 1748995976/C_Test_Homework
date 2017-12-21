#include<stdio.h>
#include<string.h>
int search(int a[],int c,int d);
int main(void)
{
    int a ,b ,c ,n=10,x ,k=0 ,l;
    int score[10]={[0]=0};
    char name[10][10] , wait[10];
    for(a=0;a<n;a++){
        scanf("%s %d",name[a],&score[a]);
    }
    for(;;){
        for(a=n-1;a>=k;a--){
            if(score[a-1]<score[a]){
                c=score[a];
                score[a]=score[a-1];
                score[a-1]=c;
                strcpy(wait,name[a]);
                strcpy(name[a],name[a-1]);
                strcpy(name[a-1],wait);
            }
        }
        k++;
        if(k==n-1)
            break;
    }
    for(l=0;l<n;l++){
        printf("%s %d\n",name[l],score[l]);
    }
    printf("下面开始查找学生成绩\n");
    scanf("%d",&b);
    x=search(score,b,n);
    if(x!=-1){
        printf("%s %d\n",name[x],score[x]);
        for(++x;score[x] == b;x++)
            printf("%s %d\n",name[x],score[x]);
    }
    else
        printf("not found!\n");
    return 0;
}
int search(int a[],int c,int d)
{
    int low=0,high=d-1,mid;
    while(low<=high){
        mid=(low+high)/2;
        if(c>a[mid])
            high=mid-1;
        else if(c<a[mid])
            low=mid+1;
        else
            return (mid);
    }
    return -1;
}
