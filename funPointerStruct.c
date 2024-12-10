#include<stdio.h>
void display(struct Student s,int n);
struct Student{
	char name[10];
	int age;
	int marks;
}s[10];
int main(){
	int n,i;
		void (*p)(struct Student s,int);
	  p=display;
	printf("Enter no. of students=");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\nEnter the details of %d Student",i+1);
		printf("\nEnter name=");
		scanf("%s",s[i].name);
		printf("Enter Age=");
		scanf("%d",&s[i].age);
		printf("Enter marks=");
		scanf("%d",&s[i].marks);
	}
	

	p(s,n);
    return 0;
}

void display(struct Student s,int n){
	 int i;
	 printf("======Student Details======");
	 for(i=0;i<n;i++){
	 
	 printf("\nName=%s",s[i].name);
	 printf("\nAge=%d",s[i].age);
	 printf("\nMarks=%d",s[i].marks);
  }
}

