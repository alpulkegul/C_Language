//Project Name: File Creation

#include<stdio.h>
#include<stdlib.h>
#define DATA_SIZE 1000

int main(){
	char data[DATA_SIZE];
	FILE * fPtr;
	fPtr = fopen("1_datafile1.txt","w+");
	if(fPtr == NULL){
		printf("An error occurred while creating the file. Exiting the program.");
		exit(EXIT_FAILURE);
	}
	printf("Entries to be saved in the file: \n\n");
	fgets(data, DATA_SIZE,stdin);
	
	fputs(data,fPtr);
	
	fclose(fPtr);
	
	printf("The file was succesfully created and its contents saved.");
}

