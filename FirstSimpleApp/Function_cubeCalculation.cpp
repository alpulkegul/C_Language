//Project Name: Cube Calculation

#include<stdio.h>

int CalculateTheCubeOfNumber(int number){
	return (number*number*number);
}

int main(){
	int number;
	int result;
	
	printf("Enter the number: ");
	scanf("%d",&number);
	
	result = CalculateTheCubeOfNumber(number);
	printf("Cube of the number %d = %d", number, result);
	
	return 0;
}

