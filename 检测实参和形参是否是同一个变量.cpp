# include <stdio.h>

int f(int i)
{
	i = 99;                //�ֲ�����i
	return i;
}

int main(void)
{
	int i = 6;             //�ֲ�����i
	printf("i = %d\n", i);
	f(i);
	printf("i = %d\n", i);

	return 0;
}