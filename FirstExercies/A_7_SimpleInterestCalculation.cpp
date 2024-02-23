//Project: Simple Interest Calculation

#include<stdio.h>
#include<math.h> //pow

int main(){
	float principal, time, interestRate, interestAmount, compoundInterestAmount;
	
	printf("Enter the principal		: ");
	scanf("%f",&principal);
	printf("Enter the time			: ");
	scanf("%f",&time);
	printf("Enter the interest rate 	: ");
	scanf("%f",&interestRate);
	
	interestAmount = (principal * time * interestRate)/100;
	
	printf("Interest calculated by simple interest calculation	: %.2f\n", interestAmount);
	
	compoundInterestAmount = principal * (pow((1+interestRate /100),time));
	printf("Interest calculated by compound interest calculation	: %.2f", compoundInterestAmount);
	
}
