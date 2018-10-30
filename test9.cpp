#include<stdio.h>
#include<iostream.h>

struct fushu
{
	int a;
	int b;
	int c;
	int d;
	void sub();
	void mul();
};							//加法法则：（a+bi）+（c+di）=（a+c）+（b+d）i；
static int c1,c2,c3,c4;
struct fushu::sub()					//减法函数：减法法则：（a+bi）-（c+di）=（a-c）+（b-d）*i；
{
	cout<<"输入4个复数c1,c2的值:"<<endl;
	printf("输入c1,c2:");
	scanf("%d %d",&c1,&c2);
	c3=c1-c2;
}

struct fushu::mul()					//乘法法则：（a+bi）*（c+di）=（ac-bd）+（bc+ad）*i；
{
	c4=c1*c2;
}

int main()
{
	struct fushu s1;
	
	s1.sub();
	s1.mul();
	return 0;
}