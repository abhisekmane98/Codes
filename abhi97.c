#include<stdio.h>
struct student
{
	int roll_no;
	char name[20];
	int age;
};
int main()
{
	struct student s1;
	s1.roll_no=79;
	s1.name=Abhishek;
	s1.age=16;
	printf("%d %s %d",s1.roll_no,s1.name,s1.age);
}
