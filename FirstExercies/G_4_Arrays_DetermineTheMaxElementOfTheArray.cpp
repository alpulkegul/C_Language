//Project Name: Determine the Max Element of the Array

#include<stdio.h>

int main (){
	int myArray[]= {3,8,1,7,2,9,5,4};
	int greatestValue = myArray[0];
	int location = 0;
	
	int size = sizeof (myArray) / sizeof (myArray[0]);
	for (int i = 0; i < size; i++){
		if(myArray[i] > greatestValue){
			greatestValue = myArray[i];
			location = i;
		}
	}
	printf("The largest element of the array is the value %d at the indexed position %d.",location, greatestValue);
	return 0;
}
