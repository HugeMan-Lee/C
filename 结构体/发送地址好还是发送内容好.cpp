/*
	2019��8��26��21:17:57
	ָ����ŵ�֮һ��
		���ٵĴ������ݣ�
		�����ڴ��٣�
		ִ���ٶȿ죻
*/
# include <stdio.h>
# include <string.h>

struct Student          
{
	int age;
	char sex;
	char name[100];
}; 

void InputStudent(struct Student *);     //InputStudent����ǰ������
void OutputStudent(struct Student *);    //OuputStudent����ǰ������

int main(void)
{
	struct Student st;					

	InputStudent(&st);					
	printf("%d\n", sizeof(st));         //stռ108���ַ�����105��ֱ�ӷ������ݵĻ������ڴ��
	
	OutputStudent(&st);					//�������Խṹ����������Ϊ�˼����ڴ�ĺķѣ�ҲΪ��ִ���ٶȣ��Ƽ����͵�ַ

	return 0;
}

void OutputStudent(struct Student * pst)     //�β�ss��������stֵһ��
{
	printf("%d %c %s\n", pst->age, pst->sex, pst->name);
}

void InputStudent(struct Student * pstu)     //pstuֻռ4���ֽ�
{
	pstu->age = 20;
	strcpy(pstu->name, "����");
	pstu->sex = 'M';
}
/*
	�ܽ᣺
---------------------------------------------------------
��ʵ���������������洢�������������ݽ��в����������
�洢�Ͳ������⡪ ���ݽṹ�����ӣ�
���顢�������㲻����ʵ��������ͼ�洢�ȣ��벻��ָ�룩
��ⲻ��ָ�룬��ⲻ�����ݽṹ
ָ��ʹ������������ ���� �Ļ���
---------------------------------------------------------
*/
