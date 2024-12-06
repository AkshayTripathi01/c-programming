#include<stdio.h>
int main(){
	struct student{
		char name[50];
		int rollno;
		float totalmark;
	};
	struct student student;{
	
	printf("enter student name");
	scanf("%s",student.name);
	printf("enter roll number");
	scanf("%d",&student.rollNumber);
	printf("enter the total marks");
	scanf("%f",&student.totalmarks);
	
	printf("\n student detail:\n");
	printf("Name: %s \n",student.name);
	printf("Roll Number: %d \n",studemnt.rollNumber);
	printf("Total Marks: %f \n",student.totalmarks);
	};
	return 0;
}
