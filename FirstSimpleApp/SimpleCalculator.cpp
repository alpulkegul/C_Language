//Project Name: Simple Calculator

#include<stdio.h>

int main(){
	char operation;
	float n1, n2, result = 0.0f;
	
	printf("Welcome to Simple Calculator!\n");
	printf("\nPlease enter [number 1] [+ - * /] [number 2]	: ");
	scanf("%f %c %f", &n1, &operation, &n2);
	
	switch(operation){
		case '+':
			result = n1 + n2;
			break;
		case '-':
			result = n1 - n2;
			break;
		case '*':
			result = n1 * n2;
			break;
		case '/':
			result = n1 / n2;
			break;
		default: 
			printf("Invalid operation!");
	}
	printf("%.2f %c %.2f = %.2f", n1, operation, n2, result);
	return 0;
}
