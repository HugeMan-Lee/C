/*
	2019��8��20��17:35:24
*/
# include <stdio.h>

int main(void)
{
	int i;
	int j;
	int k;
	int m;

	i = j = 3;

	k = i++;
	m = ++j;

	printf("i = %d, j = %d, k = %d, m = %d\n", i, j, k, m);

	return 0;
}
/*
��VC++6.0�е��������ǣ�
==============================
i = 4, j = 4, k = 3, m = 4
==============================
*/