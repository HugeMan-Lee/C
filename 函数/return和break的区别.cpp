# include <stdio.h>

void f(void)                 //�����е�void��ʾ�ú������ܽ������ݣ�������ǰ��void��ʾ����û�з���ֵ������дreturn 0;����
{
	int i;

	for (i=0; i<5; ++i)
	{
		printf("AAAA\n");
//		break;                //���ΪAAAA BBBB
		return;               //���ΪAAAA
							  //return��ֹ�����������������������ر��ʽ��ֵ��
	}
	printf("BBBB\n");
}

int main(void)
{
	f();

	return 0;
}