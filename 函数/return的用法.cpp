# include <stdio.h>

int f(void)
{
	printf("AAAA\n");
	return 10;
}

int main(void)
{
	int i;
	i = f();
	printf("%d\n", i);

	return 0;
}
/*
	��VC++6.0�е��������ǣ�
-------------------------------
AAAA
10
-------------------------------
*/