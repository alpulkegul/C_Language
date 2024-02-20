//Project Name: Is the Number Even or Odd

#include<stdio.h>

int isTheNumberEven(int number){
	if((number % 2) == 0)
		return 1;
	else
		return 0;
	
}

int main(){
	int number;
	
	printf("Enter the number value: ");
	scanf("%d",&number);
	
	if(isTheNumberEven(number))
		printf("Is an even number.");
	else
		printf("Is an odd number.");
	
	return 0;
}
