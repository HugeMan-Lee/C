# include <stdio.h>

void exchange(int a, int b)    //a, b����������a, bû�г�ͻ
{
	int t;

	t = a;
	a = b;
	b = t;                    //ֻ������β�a��b

	return;
}

int main(void)
{
	int a = 3;
	int b = 5;
	exchange(a, b);           //ִ������β�a��b�洢�ռ��ͷţ�������ʵ��a, b��Ȼ���ڡ�

	printf("a = %d, b = %d\n", a, b);  //����Ļ�����������a, b

	return 0;
}