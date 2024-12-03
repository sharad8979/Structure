#include<stdio.h>
struct cars{
	char brand[10];
	int model;
	int year;
	long int price;
};
int main(){
	struct cars c[10];
	int n,i,y;
	printf("Enter number of cars=");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\nEnter the details of %d car",i+1);
		printf("\nEnter brand=");
		scanf("%s",c[i].brand);
		printf("\nEnter model=");
		scanf("%d",&c[i].model);
		printf("\nEnter year=");
		scanf("%d",&c[i].year);
		printf("\nEnter price=");
		scanf("%ld",&c[i].price);
	}
	printf("\nEnter the year before that year you want to details =");
	scanf("%d",&y);
	for(i=0;i<n;i++){
		if(c[i].year<y){
			printf("\nDetails");
			printf("\nBrand name=%s",c[i].brand);
			printf("\nModel=%d",c[i].model);
			printf("\nYear=%d",c[i].year);
			printf("\nPrice = %ld",c[i].price);
		}
	}
	return 0;
}
