# include <stdio.h>
# include <malloc.h>

void f(int * q)
{
	*q = 200;
}

void g(int ** q)
{ 
	**q = 10;
}
int main(void)
{
	int * p = (int *)malloc(sizeof(int)); //sizeof(int)����ֵ��int��ռ���ֽ���
	
	printf("%d\n", *p);		// ����ֵ
	f(p);					// OK
	printf("%d\n", *p);		// 200

	g(&p);
	printf("%d\n", *p);		// 10

	return 0;
}