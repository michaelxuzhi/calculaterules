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
};							//�ӷ����򣺣�a+bi��+��c+di��=��a+c��+��b+d��i��
static int c1,c2,c3,c4;
struct fushu::sub()					//�����������������򣺣�a+bi��-��c+di��=��a-c��+��b-d��*i��
{
	cout<<"����4������c1,c2��ֵ:"<<endl;
	printf("����c1,c2:");
	scanf("%d %d",&c1,&c2);
	c3=c1-c2;
}

struct fushu::mul()					//�˷����򣺣�a+bi��*��c+di��=��ac-bd��+��bc+ad��*i��
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