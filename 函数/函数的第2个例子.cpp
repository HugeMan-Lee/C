# include <stdio.h>

int f(void)          //�����е�void��ʾ�ú������ܽ������ݣ�int��ʾ��������ֵ��int���͡�
{
	return 10;       //����������main����10��
}

void g(void)         //������ǰ��void��ʾ����û�з���ֵ��
{
//	return 10;       //error ��8�����׵�void����ì�ܡ�
}

int main(void)
{
	int j = 88;

	j = f();
	printf("%d\n", j);

//	j = g();         //error ��Ϊg����û�з���ֵ��

	return 0;
}