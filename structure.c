#include<stdio.h>
struct student{
	char name[20];
	int rollno;
	int age;
	int totalMarks;
};
int main(){
	struct student stud1={"vinay",82,19,89};
	printf("Students Details");
	printf("\nName=%s",stud1.name);
	printf("\nRoll no=%d",stud1.rollno);
	printf("\nAge=%d",stud1.age);
	printf("\nTotal marks=%d",stud1.totalMarks);
	
	return 0;
}
