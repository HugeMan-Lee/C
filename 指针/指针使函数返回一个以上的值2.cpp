# include <stdio.h>

void g(int * p, int *q)     //p��a����һ��������ֻ����p������a�����ĵ�ַ��p = &a��*p = a��
							//���Ըı�������ʵ�ε�ֵ
{
	*p = 1;
	*q = 2;                //���Ըı�������һ�����ϵ�ֵ
}

int main(void)
{
	int a = 3, b = 5;
	
	g(&a, &b);

	printf("a = %d, b = %d\n", a, b);

	return 0;
}