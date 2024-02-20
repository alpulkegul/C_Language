//Project Name: Prime Number

#include<stdio.h>

int isTheNumberPrime(int number){
	for(int i = 2;i<=number/2;i++){
		if(number % i == 0){
			return 0;
		}
	}
	return 1;
}



int main(){
	int number;
	printf("Enter the number: ");
	scanf("%d",&number);
	
	if(isTheNumberPrime(number)){
		printf("%d is a prime number.", number);
	}
	else{
		printf("%d is not a prime number.", number);
	}
	return 0;
}
