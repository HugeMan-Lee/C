# include <stdio.h>

int main(void)
{
	int i, j;

	for (i=0; i<3; ++i)
	{
		for (j=1; j<4; ++j)
		{
			printf("AAAA\n");
			break;  //breakֻ����ֹ�����������ѭ��
		}
		printf("BBBB\n");
	}

	return 0;
}
/*
	2019��8��21��11:59:07
-------------------------
AAAA
BBBB
AAAA
BBBB
AAAA
BBBB
-------------------------
*/