# include <stdio.h>

//第一种方式（推荐使用第一种）
struct Student
{
	int age;
	float score;
	char sex;
};

//第二种方式
struct Student2
{
	int age;
	float score;
	char sex;
} st2;             //定义了变量

//第三种方式
struct 
{
	int age;
	float score;
	char sex;
} st3;

int main(void)
{
	struct Student st = {80, 66.6, 'F'};	

	return 0;
}