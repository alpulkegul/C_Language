//Project Name: Loops - Sum of the numbers in the given range

#include<stdio.h>
int main(){
	int lowerLimit,upperLimit,sum=0;
	printf("Enter the lower limit value: ");
	scanf("%d",&lowerLimit);
	printf("Enter the upper limit value: ");
	scanf("%d",&upperLimit);
	
	for(int i = lowerLimit; i <= upperLimit; i++)
		sum += i;
		
	printf("Sum of natural numbers between %d and %d: %d", lowerLimit, upperLimit,sum);

	
}
