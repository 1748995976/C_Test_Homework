#include "stdio.h"
#include "stdlib.h"
struct s_list
{
    int data; /* ������ */
    struct s_list *next; /* ָ���� */
} ;
void create_list (struct s_list **headp,int *p);
void main(void)
{
	struct s_list *head=NULL,*p;
	int s[]={1,2,3,4,5,6,7,8,0}; /* 0Ϊ������� */
	create_list(&head,s); /* ���������� */
	p=head; /*����ָ��pָ����ͷ */
	while(p){
		printf("%d\t",p->data); /* ����������ֵ */
		p=p->next; /*����ָ��pָ����һ��� */
	}
	printf("\n");
}
void create_list(struct s_list **headp,int *p)
{
	struct s_list * loc_head=NULL,*q,*l;
	if(p[0]==0);
	else{
        loc_head=(struct s_list *)malloc(sizeof(struct s_list));
        loc_head->data=*p++;
        l=loc_head;
        while(*p){
            q=(struct s_list *)malloc(sizeof(struct s_list));
            q->data=*p++;
            q->next=l;
            l=q;
        }
        loc_head->next=NULL;
	}
        *headp=q;
}
