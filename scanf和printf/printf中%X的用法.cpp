/*
	2019��8��18��11:32:25
	Ŀ�ģ�
		����%x %X %#x %#X %#o���÷�
*/

# include <stdio.h>

int main(void)
{
	int i = 47;
	
	printf("i = %X\n", i); //2F
	printf("i = %x\n", i); //2f
	printf("i = %#x\n", i); //0x2f
	printf("i = %#X\n", i); //0X2F
	printf("i = %#o\n", i); //057

	return 0;
}
/*
	��VC++6.0�е��������ǣ�
---------------------
i = 2F
i = 2f
i = 0x2f
i = 0X2F
i = 057
---------------------
	�ܽ᣺
*/
