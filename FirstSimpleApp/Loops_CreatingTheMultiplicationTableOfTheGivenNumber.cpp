//Project Name: Loops - Creating the multiplication table of the given number

#include<stdio.h>
int main(){
	int n;
	
	printf("Enter the number to create a multiplication table:");
	scanf("%d",&n);
	
	for(int i=1; i<=10;i++)
		printf("%d * %d		= %d\n",n,i,(n*i));

}
