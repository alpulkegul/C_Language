//ProjectName: Function - Armstrong Number

#include<stdio.h>
#include<math.h>

int isTheNumberArmstrong(int number)
{
	int lastDigit, sum, originalNumber, digitNumber;
	sum = 0;
	originalNumber = number;
	
	digitNumber = (int) log10(number)+1;
	while(number > 0){
		lastDigit = number % 10;
		sum += round(pow(lastDigit,digitNumber));
		number /= 10;
	}
	return (digitNumber == sum);
}

int main()
{
	int number;
	printf("Enter the number: ");
	scanf("%d",&number);
	if(isTheNumberArmstrong(number)){
		printf("%d is an Armstrong number.",number);
		
	}
	else
		printf("%d is not an Armstrong number.",number);
		
	return 0;
}
