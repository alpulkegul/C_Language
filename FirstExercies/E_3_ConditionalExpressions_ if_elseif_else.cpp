//Project Name: Conditional Expressions - if-elseif-else
#include<stdio.h>

int main(){
	
	
	//if-elseif-else
	
	
	int n;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	
	if(n>0)
		printf("The number you entered is positive.");
	else if (n<0)
		printf("The number you entered is negative.");
	else
		printf("The number you enter is not negative or positive.");
	
	
	/*
	int n1, n2, n3, max;
	printf("Enter 3 different numbers: ");
	scanf("%d%d%d", &n1,&n2,&n3);
	
	if(n1 > n2){
		if (n1>n3)
		
			max = n1;
		else
			max = n3;
	}else{
		if(n2>n3)
			max = n2;
		else
		max = n3;
	}
	printf("max number: %d",max);
	*/
	
	/*
	int n1, n2, n3, max;
	printf("Enter 3 different numbers: ");
	scanf("%d%d%d", &n1,&n2,&n3);
	
	if((n1 > n2) && (n1 > n3))
		max = n1;
	else if ((n2 > n1) && (n2 > n3))
		max = n2;
	else
		max = n3;
		
	printf("max number: %d",max);
	*/
}
