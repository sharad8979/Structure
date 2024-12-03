#include<stdio.h>
struct student{
	char name[20];
	int rollno;
	int age;
	int totalMarks;
};
int main(){
	struct student stud[10];
	int n,i;
	printf("Enter the no of students=");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\nEnter the details of %d student",i+1);
		printf("\nEnter name=");
		scanf("%s",stud[i].name);
		printf("\nEnter roll no=");
		scanf("%d",&stud[i].rollno);
		printf("\nEnter age=");
		scanf("%d",&stud[i].age);
		printf("\nEnter marks=");
		scanf("%d",&stud[i].totalMarks);
	}
	
	for(i=0;i<n;i++){
	printf("\nDetails of student %d\n",i+1);
	printf("\nName=%s",stud[i].name);
	printf("\nRoll no=%d",stud[i].rollno);
	printf("\nAge=%d",stud[i].age);
	printf("\nTotal marks=%d",stud[i].totalMarks);
}
	
	return 0;
}
