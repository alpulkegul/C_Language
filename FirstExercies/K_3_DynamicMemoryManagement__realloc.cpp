//Project Name: Dynamic Memory Management - realloc

#include<stdio.h>
#include<stdlib.h>

int main(){
	int *pointer, i, n1, n2;
	printf("Enter size: ");
	scanf("%d", &n1);
	pointer = (int*) malloc(n1 * sizeof(int));
	printf("First allocated memory addresses: \n");
	for(i = 0;i<n1;++i){
		printf("%pc\n",pointer + i);
	}
	
	printf("Enter new size: ");
	scanf("%d",&n2);
	
	pointer =  (int*) realloc(pointer, n2 * sizeof (int));
	printf("New allocated memory addresses: \n");
	for (i = 0; i < n2; ++i){
		printf("%pc\n", pointer + i);
	}
	
	free(pointer);
	
	return 0;
	
	
}
