//Project Name: Enums

#include<stdio.h>

enum Levels{
	LOW,
	MEDIUM,
	HIGH
};

int main(){
	enum Levels roomTemperature = MEDIUM;
	printf("%d\n", roomTemperature);
}



