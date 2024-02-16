//Project Name: Exponential Operations

#include<stdio.h>
#include<math.h> //pow

int main(){
	double base,exp,result;
	printf("Enter the base value: ");
	scanf("%lf",&base);
	printf("Enter the exponential value: ");
	scanf("%lf",&exp);
	
	result = pow(base,exp);
	
	printf("%.2lf ^ %.2lf = %.2lf ", base, exp, result);
	

}
