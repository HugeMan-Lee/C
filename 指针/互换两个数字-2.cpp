# include <stdio.h>

void exchange(int * p, int * q)
{
	int * t;
	
	t = p;
	p = q;
	q = t;                   //��������p q�����ݣ�*p = b��*q = a��

	return;
}

int main(void)
{
	int a = 3;
	int b = 5;
	exchange(&a, &b);        //exchange(a, b);����

	printf("a = %d, b = %d\n", a, b); //�������a = 3,b = 5

	return 0;
}