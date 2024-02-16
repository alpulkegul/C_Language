//Project Name: Conditional Expressions

#include<stdio.h>

int main(){
	
	//if
	/*
	int number1, number2;
	printf("Enter 2 numbers: ");
	scanf("%d%d",&number1,&number2);
	
	if (number1 > number2)
		printf("Big Number: %d\n",number1);
	
	if (number1 < number2)
		printf("Big Number: %d\n",number2);
	if (number1 == number2)
		printf("Numbers are equal to each other.\n");
	*/
	
	/*
	int n;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	
	if(n<0){
		printf("The number you entered is negative.");
	}	
	
	if(n>0){
		printf("The number you entered is positive.");
	}
	
	if(n==0){
		printf("The number you enter is not negative or positive.");
	}
	*/
	
	//if-elseif-else
	
	/*
	int n;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	
	if(n>0)
		printf("The number you entered is positive.");
	else if (n<0)
		printf("The number you entered is negative.");
	else
		printf("The number you enter is not negative or positive.");
	*/
	
	/*
	int n1, n2, n3, max;
	printf("Enter 3 different numbers: ");
	scanf("%d%d%d", &n1,&n2,&n3);
	
	if(n1 > n2){
		if (n1>n3)
		
			max = n1;
		else
			max = n3;
	}else{
		if(n2>n3)
			max = n2;
		else
		max = n3;
	}
	printf("max number: %d",max);
	*/
	
	/*
	int n1, n2, n3, max;
	printf("Enter 3 different numbers: ");
	scanf("%d%d%d", &n1,&n2,&n3);
	
	if((n1 > n2) && (n1 > n3))
		max = n1;
	else if ((n2 > n1) && (n2 > n3))
		max = n2;
	else
		max = n3;
		
	printf("max number: %d",max);
	*/
	/*
	
	// Profit and loss calculation
	
	int cost, salePrice, profitLoss;
	
	printf("Enter the cost price: ");
	scanf("%d",&cost);
	printf("Enter the sale price: ");
	scanf("%d",&salePrice);
	
	if(salePrice > cost){
		profitLoss = salePrice - cost;
		printf("Profit made: %d",profitLoss);
	}
	else if (salePrice < cost){
		profitLoss = salePrice - cost;
		printf("Loss made: %d",profitLoss);
	}else
		printf("No profit or loss on product sales.");
	
	*/
	
	//Leap year
	
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

		
		
	
	
		

