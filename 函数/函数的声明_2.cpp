/*
	2019��8��22��16:17:54
	һ��Ҫ���׸ó���Ϊʲô�Ǵ����
	һ��Ҫ���׸ó����9����Ч֮�����Ϊʲô����ȷ��
*/

# include <stdio.h>

void f(void);  //9��

void g(void)
{
	f();  //��Ϊ����f�����˵���f�ĺ��棬�����﷨����
}

void f(void)
{
	printf("����!\n");
}

int main(void)
{
	g();

	return 0;
}


