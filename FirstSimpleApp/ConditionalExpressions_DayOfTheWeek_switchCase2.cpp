//Project Name: Conditional Expressions - Day of the week -switchCase 2

#include<stdio.h>

int main(){
	int day;
	
	printf("Enter the day of the week a number (1 to 7): ");
	scanf("%d",&day);
	
	/*
	switch(day){
		case 1:
			printf("");
			break;
		case 2:
			printf("Weekdays");
			break;
		case 3:
			printf("Weekdays");
			break;
		case 4:
			printf("Weekdays");
			break;
		case 5:
			printf("Weekdays");
			break;
		case 6:
			printf("Weekend");
			break;
		case 7:
			printf("Weekend");
			break;
		default:
			printf("Invalid day value.");
	}	
	*/	
	
	switch(day){
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("Weekdays");
			break;
		case 6:
		case 7:
			printf("Weekend");
			break;
		default:
			printf("Invalid day value.");
	}				
}
