#include<stdio.h>
struct employee{
	char name[20];
	int id;
	int sal;
	char dep[20];
};
int main(){
	struct employee emp[10];
	int n,i;
	printf("Enter the no of employees=");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\nEnter the details of %d empoloyee",i+1);
		printf("\nEnter name=");
		scanf("%s",emp[i].name);
		printf("\nEnter ID=");
		scanf("%d",&emp[i].id);
		printf("\nEnter salary=");
		scanf("%d",&emp[i].sal);
		printf("\nEnter Department=");
		scanf("%s",emp[i].dep);
	}
	
	for(i=0;i<n;i++){
	printf("\nDetails of employee %d\n",i+1);
	printf("\nName=%s",emp[i].name);
	printf("\nID = %d",emp[i].id);
	printf("\nSalary=%d",emp[i].sal);
	printf("\nDepartment=%s",emp[i].dep);
}
	
	return 0;
}
