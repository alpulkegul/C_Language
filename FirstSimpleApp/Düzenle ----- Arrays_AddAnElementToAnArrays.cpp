//Project Name: Add an Element to an Array

#include<stdio.h>

int main(){
	int numberToAdd, indexToAdd;
	int myArray[] = {6,5,4,8,2,5,9};
	int size = sizeof(myArray) / sizeof(myArray[0]);
	
	for (int i = 0; i<size; i++){
		printf("%d\n",myArray[i]);
	} 
	
	printf("\nEnter the number to add to the array: ");
	scanf("%d",&numberToAdd);
	printf("Specify to which index the number should be added: ");
	scanf("%d", &indexToAdd);
	
	for(int i = size-1; i>indexToAdd;i++){
		myArray[i] = myArray[i-1];
	}
	
	myArray[indexToAdd] = numberToAdd;
	
	for(int i = 0; i<size; i++){
		printf("%d\n",myArray[i]);
		
	}
	return 0;
}


