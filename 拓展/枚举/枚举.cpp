# include <stdio.h>

enum week  //������һ���������ͣ���û�ж����������������������enum week
{
	Monday=4, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday  //mondayĬ����0
};

int main(void)
{
//	int day;  //�����int���Ͳ����� 
	enum week today = Wednesday;//�������ֻ�����0-6��7��������ĳ1��
	printf("%d\n", today);   //��������6

	return 0;
}