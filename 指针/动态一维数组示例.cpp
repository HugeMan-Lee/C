# include <stdio.h>
# include <malloc.h>

int main(void)
{
	int a[5];  //���intռ4���ֽڣ��������ܹ�����20���ֽڣ�ÿ4���ֽڱ�����һ��int������ʹ��
			   //��̬����

	int len;
	int * pArr;
	int i;
    //��̬�Ĺ���һά����
	printf("����Ҫ��ŵ�Ԫ�صĸ�����");
	scanf("%d\n", &len);
	pArr = (int *)malloc(4 * len);   //������int pArr[len];
	
	//��һά������в���   �磺�Զ�̬һά������и�ֵ
	for (i=0; i<len; ++i)
		scanf("%d", &pArr[i]);

	//��һά����������
	printf("һά����������ǣ�\n");
	for (i=0; i<len; ++i)
		printf("%d\n", pArr[i]);

	free(pArr);     //�ֶ��ͷŵ���̬��������飬��̬���鲻���ֶ��ͷ�
	

	return 0;
}