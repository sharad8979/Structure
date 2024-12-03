#include<stdio.h>
struct date1{
	int date;
	int mon;
	int year;
};
struct date2{
	int date;
	int mon;
	int year;
};
struct diff{
   int date;
	int mon;
	int year;
	
};
int main(){
	struct date1 d1;
	struct date2 d2;
	struct diff d;
	printf("Enter first date month and year=");
	scanf("%d %d %d",&d1.date,&d1.mon,&d1.year);
	printf("\nEnter second date month year=");
	scanf("%d %d %d",&d2.date,&d2.mon,&d2.year);
	if(d1.date>d2.date){
     	d.date=d1.date-d2.date;	
	}else{
		d.date=d2.date-d1.date;
	}
	
    if(d1.mon>d2.mon){
     	d.mon=d1.mon-d2.mon;	
	}else{
		d.mon=d2.mon-d1.mon;
	}
   
   if(d1.year>d2.year){
     	d.year=d1.year-d2.year;	
	}else{
		d.year=d2.year-d1.year;
	}
	
	printf("\nDifference between both dates = %d days %d month %d year",d.date,d.mon,d.year);
	
	return 0;
}
