//Project Name: File Read

#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fPtr;
	char character;
	fPtr = fopen("1_datafile1.txt","r");
	if(fPtr == NULL){
		printf("File could not be read.");
		printf("Check that the file is in relevant location and that you are authorized to access it.");
		exit(EXIT_FAILURE);
	}
	printf("The file opened succesfully. Reading content.\n\n\n");
	
	
	do{
		character = fgetc(fPtr);
		putchar(character);
		
	}while (character != EOF);
	
	fclose(fPtr);
}
