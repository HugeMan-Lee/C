/*
	2019��8��22��16:41:51
	�ж�һ�������Ƿ�������
	�õ����ĺ�����ʵ��, ����Ŀ����������	
*/

# include <stdio.h>

bool IsPrime(int val)
{
	int i;

	for (i=2; i<val; ++i)
	{
		if (0 == val%i)
			break;
	}
	if (i == val)
		return true;
	else
		return false;
}

int main(void)
{
	int val;

	scanf("%d", &val);
	if ( IsPrime(val) )
		printf("Yes!\n");
	else
		printf("No!\n");

	return 0;
}