# include <stdio.h>

int f()
{
	return 10.5;      //��Ϊ�����ĺ�������ֵ������int��������returnΪ׼�����պ�������ֵ����Ϊ10.000000
}

int main(void)
{
	int i = 99;
	double x = 6.6;

	x = f();
	printf("%lf\n", x);

	return 0;
}