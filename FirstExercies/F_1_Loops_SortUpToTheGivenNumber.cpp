//Project Name: Loops - Sort up to the given number

#include<stdio.h>
int main(){
	int a,i;
	printf("Enter the number: ");
	scanf("%d", &a);
	
	printf("Counting numbers from 1 to %d\n",a);
	
	for(i = 1; i<=a;i++){
		printf("%d\n",i);		
	}
	
	printf("\n");
	
	i=1;
	while(i<=a){
		printf("%d\n",i);
		i++;
	}
	printf("\n");
	i=1;
	do{
		printf("%d\n",i);
		i++;
	}while(i<=a);
}

