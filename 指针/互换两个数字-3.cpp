# include <stdio.h>

void exchange(int * p, int * q)
{
	int t;
	
	t = *p;      //p��int *�� *p��int
	*p = *q;
	*q = t;                   

	return;
}

int main(void)
{
	int a = 3;
	int b = 5;
	exchange(&a, &b);        //exchange(a, b);����
							 //Ҫ��ı�������������ֵ��������������������ĵ�ַ��
							 //�ο�������������-1����������a b�ͱ���������a b��һ�������Ի����ˡ�
	                         //�൱���ڱ��������иı��������ı�����ֵ��exchange(a, b)���С�

	printf("a = %d, b = %d\n", a, b); 

	return 0;
}