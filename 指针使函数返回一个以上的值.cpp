# include <stdio.h>

int f(int i, int j)             //û��ָ�룬����ͨ���βθı�ʵ�ε�ֵ
{
	return 100;
//  return 88��                 //û��ָ�룬ֻ���޸�һ��ֵ
}

int main(void)
{
	int a = 3, b = 5;

	a = f(a, b);
	b = f(a, b);

	printf("a = %d, b = %d\n", a, b);

	return 0;
}