# include <stdio.h>

int main(void)
{
	/*
	if (3 > 2)
		printf("AAAA\n");
	else                 //elseĬ��ֻ�ܿ���1��
		printf("BBBB\n");

	printf("CCCC\n");    //������ΪAAAA CCCC  ע������
	*/
	if (1 > 2)
		printf("AAAA\n");
	else                 
		printf("BBBB\n");

	printf("CCCC\n");    //������ΪBBBB CCCC

	return 0;
}
/*
---------------------------------------
���������ܹ�2����䣺A B���ֻ��ִ��1��
elseֻ�ܿ���һ�����ִ��
---------------------------------------
*/