#include<stdio.h>
struct num1{
	int real;
	int img;
};
struct num2{
	int real;
	int img;
};
struct sum{
    int real;
    int img;
};

int main(){
	struct num1 n1;
	struct num2 n2;
	struct sum s;
	printf("Enter the real and imaginary part of first number=");
	scanf("%d %d",&n1.real,&n1.img);
    printf("\nEnter the real and imaginary part of second number=");
	scanf("%d %d",&n2.real,&n2.img);
	s.real=n1.real+n2.real;
	s.img=n1.img+n2.img;
	
		printf("\nFirst number = %d + %di",n1.real,n1.img);
		printf("\nSecond number = %d + %di",n2.real,n2.img);
		printf("\nSum of two complex number=%d + %di",s.real,s.img);
	return 0;
}
