# include <stdio.h>

int main (void)
{
	int i = 2147483647;//�����i = 2147483647
	//int i = 2147483648;//�����i = -2147483648
	//int i = 2147483649;// �����i = -2147483647


	printf("i = %d\n", i);

	return 0;
}