//Project Name: #Define and #Undef

#include<stdio.h>
#include<stdlib.h>

#define LARGE_NUMBER 1000000

int process(int input){
	return(input<LARGE_NUMBER);
}

int main(){
	int firstVariable = 20;
	int secondVariable = 25;
	int result1, result2;
	const int OTHER_LARGE_NUMBER = 1000000;
	
	printf("Large number: %d\n",LARGE_NUMBER);
	result1 = secondVariable < LARGE_NUMBER;
	printf("Result 1: %d\n",result1);
	result2 = secondVariable < LARGE_NUMBER;
	printf("Result 2: %d\n", result2);
	#undef LARGE_NUMBER
	#define LARGE_NUMBER 3000000
	printf("Large number: %d\n",LARGE_NUMBER);
}
