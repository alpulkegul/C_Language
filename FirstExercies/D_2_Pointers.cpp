//Project Name: Pointers

#include<stdio.h>
int main(){
	int number = 25;
	int * pointer;
	pointer = &number;
	
	printf("Adress of the number variable			: %d\n", &number);
	printf("Content of the number variable			: %d\n", number);
	
	printf("Adress of the pointer variable			: %d\n", &pointer);
	printf("Content of the pointer variable			: %d\n", pointer);
	printf("The value pointed to by the pointer variable	: %d\n", &pointer);
	
	
	
}
