/*
	2019��8��26��21:15:16
	ͨ��������ɶԽṹ���������������
*/
# include <stdio.h>
# include <string.h>

struct Student          //�ṹ��ĳ��ȣ��ַ����
{
	int age;
	char sex;
	char name[100];
}; //�ֺŲ���ʡ

void InputStudent(struct Student *);    //InputStudent����ǰ������
void OutputStudent(struct Student ss);  //OuputStudent����ǰ������

int main(void)
{
	struct Student st;

	InputStudent(&st);					//�������Խṹ���������
	printf("%d %c %s\n", st.age, st.sex, st.name);
	
	OutputStudent(st);					//�������Խṹ��������

	return 0;
}

void OutputStudent(struct Student ss)     //�β�ss��������stֵһ��
{
	printf("%d %c %s\n", ss.age, ss.sex, ss.name);
}


void InputStudent(struct Student * pstu)  //pstuֻռ4���ֽ�
{
	pstu->age = 10;
	strcpy(pstu->name, "����");
	pstu->sex = 'F';
}
/*
//�������޷��޸�������st��ֵ
void InputStudent(struct Student stu)  
{
	stu.age = 10;
	strcpy(stu.name, "����");  //����д�� stu.name = "����";�ַ���֪ʶ
	stu.sex = 'F';

}
*/