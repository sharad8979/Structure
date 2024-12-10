#include<stdio.h>
struct employee{
	char name[10];
	int id;
	long int sal;
	int year;
}emp[10];
int main(){
	int n,i;
	printf("Enter no. of employees");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the details of %d employee",i+1);
		printf("\nEnter name=");
		scanf("%s",emp[i].name);
		printf("\nEnter Id=");
		scanf("%d",&emp[i].id);
		printf("\nEnter salary=");
		scanf("%ld",&emp[i].sal);
		printf("\nEnter the year of service=");
		scanf("%d",&emp[i].year);
	}
	printf("\n=============Details of employees==========\n");
	for(i=0;i<n;i++){
		if(emp[i].year>5){
			int b=(emp[i].sal)*0.01;
			int s=b+emp[i].sal;
			
			printf("\nName=%s",emp[i].name);
			printf("\nId=%d",emp[i].id);
			printf("\nSalary with bonus=%d",s);
		}
	}
	
	
	
	return 0;
}
