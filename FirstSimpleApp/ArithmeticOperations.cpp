//Project Name: Arithmetic Operations

#include<stdio.h>

int main(){
	int n1,n2;
	int sum, sub, multiplication, mode;
	float division;
	
	//printf("Enter number 1: ")
	//scanf("%d", &n1);
	//printf("Enter number 2: ")
	//scanf("%d", &n2);
	
	//or
	
	printf("Enter 2 numbers: ");
	scanf("%d %d", &n1, &n2);
	
	sum = n1 + n2;
	sub = n1 - n2;
	multiplication = n1 * n2;
	mode = n1 % n2;
	division = (float)n1 / (float)n2;
	
	printf("Sum				: %d\n", sum);
	printf("Sub				: %d\n", sub);
	printf("Multiplication	: %d\n", multiplication);
	printf("Mode			: %d\n", mode);	
	printf("Division		: %.2f", division);
}
