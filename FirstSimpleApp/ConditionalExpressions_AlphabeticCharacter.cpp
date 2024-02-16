//Project Name: Alphabetic Character

#include<stdio.h>

int main(){
	char character;
	
	printf("Enter character:");
	scanf("%c", &character);
	
	if((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
		printf("You entered an alphabetic character.");
	else 
		printf("You entered an non-alphabetic character.");
}


