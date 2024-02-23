//Project Name: Dynamic Memory Management - Malloc

#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,i,*pointer, sum = 0;
	
	printf("Enter the number of elements to collect: ");
	scanf("%d",&n);
	
	pointer = (int *) malloc(n*sizeof(int));
	
	if(pointer == NULL){
		printf("ERROR! Memory allocation failed.\n");
		exit(0);
	}
	printf("Enter the elements to be collected: \n\n");
	for(i = 0; i<n;++i){
		scanf("%d", pointer + i);
		sum += *(pointer + i);
	}
	
	printf("Sum: %d\n", sum);
	
	
	free(pointer);
	return 0;
}
