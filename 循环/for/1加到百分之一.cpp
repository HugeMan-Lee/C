# include <stdio.h>

int main(void)
{
	int i;                      //int i���߼������   float i;ʵ�����Ǵ���ġ��������洢������
	float sum = 0;

	for (i=1; i<=100; ++i)
	{
		sum = sum + 1.0/i;          // 1/2 == 0��1/3 ==0��//��д��sum = sum + 1 / (float)(i);								  
	}
	
	printf("sum = %f\n", sum);

	return 0;
}
