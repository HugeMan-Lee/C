# include <stdio.h>

int main(void)
{
	int i;
/*
	switch (2)
	{
	case 2:
		printf("����!\n");
		break;  //OK, break��������switch
	}

*/
	
	for (i=0; i<3; ++i )
	{
		if (3 > 2)	 
		printf("�ٺ�!\n");
		break; //break��Ȼ��if�ڲ�����䣬��break��ֹ��ȷ���ⲿ��forѭ��
	}

	return 0;
}
/*
	��VC++6.0�е��������ǣ�
------------------------
�ٺ�!
------------------------
*/