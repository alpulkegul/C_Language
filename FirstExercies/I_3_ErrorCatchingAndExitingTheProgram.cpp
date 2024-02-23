//Project Name: Error Catching and Exiting the Program

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int dividedBy = 20;
	int divider = 0;
	int division;
	
	if(divider == 0){
		printf("Division by zero error. Exiting the program.");
		exit(1); //or exit(EXIT_FAILURE);
	}
	
	division = dividedBy / divider;
	fprintf(stderr, "Result: %d\n",division);
	
	exit(0); //or exit(EXIT_SUCCESS)
	
}
