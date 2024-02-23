//Project Name: Loops - Sort and add up to the given number

#include<stdio.h>
int main(){
	int n, sum = 0;
	
	printf("Enter the number: ");
	scanf("%d",&n);
	
	for(int i = 1; i<=n; i++)
		sum += i;

	printf("Sum of the first %d natural numbers:%d",n,sum);
	
}
