#include<stdio.h>
#include<stdlib.h>
struct bits{
    unsigned char bit0:1,bit1:1,bit2:1,bit3:1,bit4:1,bit5:1,bit6:1,bit7:1;
};
union w8{
    unsigned char i;
    struct bits s;
}t;
void f0(struct bits b)
{
	printf("the function %u is called!\n",b.bit0);
}
void f1(struct bits b)
{
	printf("the function %u is called!\n",b.bit1);
}
void f2(struct bits b)
{
	printf("the function %u is called!\n",b.bit2);
}
void f3(struct bits b)
{
	printf("the function %u is called!\n",b.bit3);
}
void f4(struct bits b)
{
	printf("the function %u is called!\n",b.bit4);
}
void f5(struct bits b)
{
	printf("the function %u is called!\n",b.bit5);
}
void f6(struct bits b)
{
	printf("the function %u is called!\n",b.bit6);
}
void f7(struct bits b)
{
	printf("the function %u is called!\n",b.bit7);
}
int main(void)
{
    void (*p_fun[8])(struct bits b);
    p_fun[0]=f0;
    p_fun[1]=f1;
    p_fun[2]=f2;
    p_fun[3]=f3;
    p_fun[4]=f4;
    p_fun[5]=f5;
    p_fun[6]=f6;
    p_fun[7]=f7;
    int h;
    scanf("%c",&h);
    t.i=h;
    if(t.s.bit0) p_fun[0](t.s);
    if(t.s.bit1) p_fun[1](t.s);
    if(t.s.bit2) p_fun[2](t.s);
    if(t.s.bit3) p_fun[3](t.s);
    if(t.s.bit4) p_fun[4](t.s);
    if(t.s.bit5) p_fun[5](t.s);
    if(t.s.bit6) p_fun[6](t.s);
    if(t.s.bit7) p_fun[7](t.s);
    return 0;
}
