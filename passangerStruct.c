#include<stdio.h>
struct flight{
	char name[10];
	int seat;
	int age;
	char clas[10];
}p[10];
int main(){
	int n,i,c=0;
	printf("Enter the number of passangers=");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\nEnter the details of %d passanger",i+1);
		printf("\nEnter name=");
		scanf("%s",p[i].name);
		printf("Enter Age=");
		scanf("%d",&p[i].age);
		printf("Enter seat number=");
		scanf("%d",&p[i].seat);
		printf("Enter class=");
		scanf("%s",p[i].clas);
	}
	  printf("=============Details of Economic Class passanger==========");
	for(i=0;i<n;i++){
		  if((strcmp(p[i].clas,"Economic"))==0){
		  	  c++;
		  	  printf("\nName=%s",p[i].name);
		  	  printf("\nSeat no=%d",p[i].seat);
		  	  printf("\nAge = %d",p[i].age);
		  	  printf("\nClass = %s",p[i].clas);
		  }
	}
	
	return 0;
}
