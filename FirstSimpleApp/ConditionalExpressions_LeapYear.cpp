//Project Name: Conditional Expressions - Leap Year

#include<stdio.h>

int main(){
	int n;
	
	printf("Enter the year value: ");
	scanf("%d", &n);
	int year;
	n = year;
	
	if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		printf("The year value you entered is leap year.");
	else
		printf("The year value you enter is not a leap year");
}
	
