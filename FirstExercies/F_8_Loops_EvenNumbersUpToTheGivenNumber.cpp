//Project Name: Loops - Even numbers up to the given number

#include<stdio.h>

int main(){
	
	int n;
	printf("Enter the upper limit value: ");
	scanf("%d", &n);
	
	printf("Even numbers from 1 to %d:\n", n);
	
	for (int i = 1; i<=n; i++){
		if (i % 2 == 0)
			printf("%d\n",i);
	}
		
	
	
	
	
}
