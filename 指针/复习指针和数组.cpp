# include <stdio.h>

void f(int * pArr, int len)         //����ֵ�Ĺ��� �ȼ��� pArr = &a[0]��pArrָ��a[0]  //a == &a[0]
{
	int i;							//��f�����ڲ���pArr[i]���������в������൱����main������a������в�����
									//��Ϊ���������Ŀռ��ǹ̶��ģ�����ָ���ں����иı��˿ռ��е�ֵ
	for (i=0; i<len; ++i)
		printf("%d\n", *(pArr+i));  //*(pArr+i)=pArr[i]   *(pArr+2) == pArr[2] == *(a+2) == a[2]
}

int main(void)
{
	int a[5] = {1, 2, 3, 4, 5};
//	a = &a[2];                     //����ָ�볣����ֵ��ָ�룬��Ϊ�ǳ��������Բ��ܱ���ֵ
//	a == &a[0];
	f(a, 5);

	printf("%#X, %#X\n",a, &a[0] );

	return 0;
}