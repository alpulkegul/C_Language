//Project Name: Assigning Values to Variables

#include<stdio.h>

int main(){
	
	int x = 5, y = 10, z = 15;
	
	printf("%d\n",x+y+z);
	printf("\n");
	
	x = y = z = 100;
	printf("%d",x+y+z);
}
