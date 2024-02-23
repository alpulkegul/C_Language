//Project Name: Typecasting Number Systems

#include<stdio.h>

int main(){
	/*
	int n1 = 24, n2=7 ;
	
	int integerDivisionResult;
	float realDivisionResult_float;
	double realDivisionResult_double;
	int realDivisionResult_floatInteger;
	
	integerDivisionResult = n1/n2;
	printf("Integer Division Result					: %d\n", integerDivisionResult);
	realDivisionResult_float = (float)n1/n2;
	printf("Real Division Result Float				: %.5f\n", realDivisionResult_float);
	realDivisionResult_double = (double)n1/n2;
	printf("Real Division Result Double				: %.5f\n", realDivisionResult_double);
	realDivisionResult_floatInteger = (int)realDivisionResult_float;
	printf("The result of real division converted to an integer	: %d", realDivisionResult_floatInteger);
	*/
	
	/*
	int a = 40; // decimal
	int b = 0b001000011001; //binary
	int c = 0x25; //hexadecimal
	
	printf("a	= 	%d\n", a);
	printf("b	= 	%d\n", b);
	printf("c	= 	%d\n", c);
	*/
	
	float cm, meter, km;
	printf("Enter the lenght in centimeters: ");
	scanf("%f", &cm);
	
	meter	=	cm/100.0;
	km		=	cm/100000.0;
	
	printf("Lenght in meter		: %.2f m\n", meter);
	printf("Lenght in km		: %.2f km", km);
	
}
