/*
	2019��8��20��13:09:05
	1-100������֮��
	1-100��ż��֮��
	1-100����������
	1-100������ƽ��ֵ
*/
# include <stdio.h>

int main(void)
{
	int i, sum1 = 0, sum2 = 0, count = 0;//sum1Ϊ�����ͣ�sum2Ϊż����
	float ave;                           //��ֵ����ΪС����

	for (i=1; i<=100; ++i)
	{	
		if (i%2 == 1)      //����2ȡ��
		{
			sum1 += i;    //1-100����֮�� sum1 = sum1 + i;
			++count;      //1-100��������  count = count + 1;
		}
		else
			sum2 += i;    //1-100ż��֮��
	}

	ave = 1.0*sum1/count;          //1-100�����͵�ƽ��ֵ��1.0Ĭ����double����ע��һ�£����ܻᶪʧ����
	                               //ave = (float)(sum1) / (float)(count);
	
	printf("sum1 = %d sum2 = %d count = %d ave = %f\n", sum1, sum2, count, ave);

	return 0;
}