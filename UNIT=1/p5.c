#include <stdio.h>
#include <conio.h>

struct student
{
	int rollno;
	char name[20];
};

void main()
{
	struct student s1;


	printf("\n Enter roll number :");
	scanf("%d",&s1.rollno);

	printf("\n enter name:");
	gets(s1.name);

	printf("\n student data is as follows");
	printf("\n * * * * * * * * * * * * * ");

	printf("\n roll number is : %d",s1.rollno);
	printf("\n name is : % ", s1.rollno);

	getch();
}
