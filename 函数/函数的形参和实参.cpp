# include <stdio.h>

void f(int i, float x)
{
	printf("%d\n", i);
	printf("%f\n", x);
}

int main(void)
{
	f(9.9, 6.6);     //��ò�Ҫд9.9

	return 0;
}
/*
	��VC++6.0�е��������ǣ�
--------------------------
9
6.600000
--------------------------
*/
