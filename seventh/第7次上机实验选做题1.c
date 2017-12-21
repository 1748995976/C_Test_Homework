#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 3
struct s_list{
    char number[11];
    char name[21];
    char subject[4][20];
    float goal[4];
    struct s_list *next;
};
void create_list(struct s_list **headp,int n);
void compare(struct s_list **q,float *l,int n);
int main(void)
{
     char search1[11];
     char search2[20];
     int i,b=0;
     printf("Please input the number of students\n");
     //scanf("%d",&N);//学生的数量
     float a,s_goal[N];
     struct s_list *head=NULL,*p;
     printf("input the information of every student\n");
     create_list(&head,N);
     p=head;
     printf("\nif you want change someone\'s point,");
     printf("please input his student number,else input # to leave\n");
     scanf("%s",search1);
     for(;p!=NULL,search1[0]!='#';){
         if(strcmp(p->number,search1)==0){
            printf("Please input which subject\'point that you want change\n");
            scanf("%s",search2);
            for(i=0;i<4;i++){
                if(strcmp(p->subject[i],search2)==0){
                    printf("input new point\n");
                    scanf("%f",&p->goal[i]);
                    break;
                }
            }
            printf("continue correct? if continue please input student number,");
            printf(" else input # to leave.\n");
            scanf("%s",search1);
         }
         else
            p=p->next;
         if(p==NULL){
            printf("Not exist this student,please input again.");
            printf("if you want to leave ,please input #.\n");
            scanf("%s",search1);
            p=head;
         }
     }
     printf("\n");
     p=head;
     while(p){
        puts(p->number);
        puts(p->name);
        for(i=0,a=0;i<4;i++){
            printf("%s:",p->subject[i]);
            printf("%-6.2f  ",p->goal[i]);
            a=a+p->goal[i];
        }
        printf("平均成绩:%-6.2f\n",a/4);
        p=p->next;
        s_goal[b++]=a/4;
     }
     p=head;
     compare(&p,s_goal,N);
     p=head;
     while(p){
        puts(p->number);
        puts(p->name);
        for(i=0,a=0;i<4;i++){
            printf("%s:",p->subject[i]);
            printf("%-6.2f  ",p->goal[i]);
            a=a+p->goal[i];
        }
        printf("平均成绩:%-6.2f\n",a/4);
        p=p->next;
        s_goal[b++]=a/4;
     }
     return 0;
}
void create_list(struct s_list **headp,int n)
{
    int a,i,b;
    char sj[4][20]={"English","Math","Physics","C_language"};
    struct s_list *loc_head=NULL,*tail;
    loc_head=(struct s_list *)malloc(sizeof(struct s_list));
    for(a=0;a<4;a++){
        for(i=0;sj[a][i]!='\0';i++)
            loc_head->subject[a][i]=sj[a][i];
       loc_head->subject[a][i]='\0';
    }//将科目名称赋给数组
    scanf("%s",loc_head->number);
    scanf("%s",loc_head->name);
    for(a=0;a<4;a++)
        scanf("%f",&(loc_head->goal[a]));
    tail=loc_head;
    for(b=1;b<n;b++){
        tail->next=(struct s_list *)malloc(sizeof(struct s_list));
        tail=tail->next;
        for(a=0;a<4;a++){
            for(i=0;sj[a][i]!='\0';i++)
                tail->subject[a][i]=sj[a][i];
        tail->subject[a][i]='\0';
        }
        scanf("%s",tail->number);
        scanf("%s",tail->name);
        for(a=0;a<4;a++)
            scanf("%f",&(tail->goal[a]));
    }
    tail->next=NULL;
    *headp=loc_head;
}
void compare(struct s_list **q,float *l,int n)
{
    int i,a;
    struct s_list *prior,*h,*u;
    for(i=0;i<n-1;i++){
        h=*q;
        for(a=0;a<n-i-1;a++,h=h->next){
            if(l[a]>l[a+1]&&a==0){
                u=h->next->next;
                h->next->next=h;
                h->next=u;
                *q=h->next;
            }
            if(l[a]>l[a+1]&&a!=0&&(a+1)!=n-i-1){
                prior->next=h->next;
                u=h->next;
                h->next=h;
                h->next=u->next;
                prior=h;
            }
            prior=h;
            if(l[a]>l[a+1]&&a==n-i-2){
                prior->next=h->next;
                h->next=h;
                h->next=NULL;
            }
        }
    }
}
