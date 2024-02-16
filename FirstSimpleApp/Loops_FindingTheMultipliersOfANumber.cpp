//Project Name: Loops - Finding the multipliers of a number

#include<stdio.h>
int main(){

	int n;
	
	printf("Enter the number to calculate the multipliers: ");
	scanf("%d",&n);
	
	printf("All multiples of %d:\n",n);
	
	for(int i = 1; i<=n;i++){
		if(n % i == 0 )
			printf("%d\n",i);
	}
	
}
