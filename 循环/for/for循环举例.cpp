/*
	2019��8��20��11:08:55
	����Ҫ��һ������
*/
# include <stdio.h>

int main(void)
{
	int i;
	int count= 0;
	int sum = 0;

	for (i=1; i<10; i+=2)
	{
		count = count + 1;                //����for��ѭ��ִ�м���
		sum = sum + i;                    //��������֮��
		printf("ѭ����%d�Σ�\n", count);  //ִ����5�Σ�
	}
	
	printf("�������i = %d\n", i);        // i = 11;
	printf("�������count = %d\n", count);// count = 5;
	printf("�������sum = %d\n", sum);	  // sum = 25


	return 0;
}
