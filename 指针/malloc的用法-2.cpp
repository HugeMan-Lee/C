# include <stdio.h>
# include <malloc.h>

void f(int * q)
{
//	*p = 200;           //f����û�ж���p����
//	**q = 200��         //error
	*q = 200;

	free(q);			//error ��qָ����ڴ��ͷŵ���4���ֽڱ��ͷ���
}

int main(void)
{
	int * p = (int *)malloc(sizeof(int)); //sizeof(int)����ֵ��int��ռ���ֽ���
	*p = 10;
	printf("%d\n", *p);

	f(p);                //p��int *����
	printf("%d\n", *p);

	return 0;
}