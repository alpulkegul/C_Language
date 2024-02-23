//Project Name: Variable Adresses

#include<stdio.h>

int main(){
	char character = 'C';
	int integer = 5;
	float reel = 5.8f;
	long long  bigInteger = 98754894;
	
	printf("The value of the character variable: %c, The adresses of the character variable			: %u\n", character, &character);
	printf("The value of the integer variable: %d, The adresses of the integer variable			: %u\n", integer, &integer);
	printf("The value of the reel variable: %f, The adresses of the reel variable			: %u\n", reel, &reel);
	printf("The value of the big integer variable: %lld, The adresses of the big integer variable	: %u\n", bigInteger, &bigInteger);
}
