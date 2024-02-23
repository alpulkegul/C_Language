//Project Name: Square Root Calculation

#include<stdio.h>
#include<math.h> //sqrt

int main(){
	double number, squareRoot;
	printf("Enter the number to calculate the square root: ");
	scanf("%lf",&number);
	
	squareRoot = sqrt(number);
	
	printf("Square root of number %.2lf: %.2lf ", number, squareRoot);
	
	return 0;
	
	

}
