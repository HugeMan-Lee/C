#include <stdio.h>

int main(void)
{
	int i;
	//ͨ��%s����
/*	char ch[101] = "\0";
	scanf("%s", ch);
	printf("%s\n", ch);
*/

	//ͨ��forѭ�������ַ���
/*	char s[101] = "\0";
	for (i=0; i<10; i++)
		scanf("%c", &s[i]);		//abc 123 qwe

	for (i=0; i<10; i++)
		printf("%c", s[i]);		//abc 123 qw
*/

	//ͨ��gets()����
/*	char arr[100] = "\0";
	gets(arr);					//abc 123 qwer
	for (i=0; i<100; i++)
		printf("%c", arr[i]);	//abc 123 qwer�ո�ո�ո񡤡���
*/

	//getchar��ʹ��
/*	
	char Arr[101];
	for (i=0; i<10; i++)
		Arr[i] = getchar();		//abc 123 qwer
	for (i=0; i<10; i++)
		putchar(Arr[i]);		//��printf("%c", Arr[i]);	//abc 123 qw
*/

/*	char c;
	while ((c= getchar()) != '\n')
		putchar(c);
*/

	return 0;
}