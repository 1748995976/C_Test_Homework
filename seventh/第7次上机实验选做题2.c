#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct s_list{
    char number[11];
    char name[21];
    char subject[4][20];
    float goal[4];
    float average;
    struct s_list *next;
};
void create_list(struct s_list **headp,int n);
void compare(struct s_list **headp);
int main(void)
{
     char search1[11];
     char search2[20];
     int i,b=0,N;
     printf("Please input the number of students.\n");
     scanf("%d",&N);//学生的数量
     float a;
     struct s_list *head=NULL,*p;
     printf("Input the information of every student.\n");
     create_list(&head,N);
     p=head;
     printf("\nIf you want change someone\'s point ,");
     printf("Please input his student number ,else input # to leave.\n");
     scanf("%s",search1);
     for(;p!=NULL,search1[0]!='#';){
         if(strcmp(p->number,search1)==0){
            printf("Please input which subject\'point that you want change.\n");
            scanf("%s",search2);
            for(i=0;i<4;i++){
                if(strcmp(p->subject[i],search2)==0){
                    printf("Input new point.\n");
                    scanf("%f",&p->goal[i]);
                    p->average=(p->goal[0]+p->goal[1]+p->goal[2]+p->goal[3])/4;
                    break;
                }
            }
            printf("continue correct? if continue please input student number ,");
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
        }
        printf("平均成绩:%-6.2f\n",p->average);
        p=p->next;
     }
     p=head;
     compare(&p);
     printf("the score in order\n");
     while(p){
        puts(p->number);
        puts(p->name);
        for(i=0,a=0;i<4;i++){
            printf("%s:",p->subject[i]);
            printf("%-6.2f  ",p->goal[i]);
        }
        printf("平均成绩:%-6.2f\n",p->average);
        p=p->next;
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
    for(a=0,i=0;a<4;a++){
        scanf("%f",&(loc_head->goal[a]));
        i=loc_head->goal[a]+i;
    }
    loc_head->average=i/4;
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
        for(a=0,i=0;a<4;a++){
            scanf("%f",&(tail->goal[a]));
            i=tail->goal[a]+i;
        }
        tail->average=i/4;
    }
    tail->next=NULL;
    *headp=loc_head;
}
void compare(struct s_list **headp)
{
    struct s_list *prior1,*prior2,*p1,*p2,*t;
    int i=0;
    p1=*headp;
    for(p2=p1->next,prior2=p1;p2!=NULL;prior2=p2,p2=p2->next)
        if(p1->average>p2->average){
            prior2->next=p1;
            t=p1->next;
            p1->next=p2->next;
            (*headp)=p2;
            p2->next=t;
            p1=p2;
        }
    for(prior1=*headp,p1=prior1->next;p1->next!=NULL;prior1=p1,p1=p1->next)
        for(p2=p1->next,prior2=p1;p2!=NULL;prior2=p2,p2=p2->next)
            if(p1->average>p2->average){
                t=p2->next;
                prior1->next=p2;
                prior2->next=p1;
                p2->next=p1->next;
                p1->next=t;
                p1=p2;
            }
}
/*u1
nie
100 100 100 100
u2
wang
99 99 99 99
u3
li
98 98 98 98
u4
ren
97 97 97 97*/
