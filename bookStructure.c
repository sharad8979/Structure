#include<stdio.h>
struct books{
	char author[20];
	int stock;
	int price;
	char title[20];
};
int main(){
	struct books b[10];
	int n,i;
	printf("Enter the no of books=");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\nEnter the details of %d book",i+1);
		printf("\nEnter author=");
		scanf("%s",b[i].author);
		printf("\nEnter stock=");
		scanf("%d",&b[i].stock);
		printf("\nEnter price=");
		scanf("%d",&b[i].price);
		printf("\nEnter Title=");
		scanf("%s",b[i].title);
	}
	
	for(i=0;i<n;i++){
		if(b[i].stock>=10){
	        printf("\nDetails of book %d\n",i+1);
	      printf("\nAuthor=%s", b [i].author);
	     printf("\nPrice = %d",b[i].price);
	    printf("\nStock=%d",b[i].stock);
	    printf("\nTitle=%s",b[i].title);
		}
	}
	
	return 0;
}
