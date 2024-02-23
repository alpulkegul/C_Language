//Project Name: Constants

#include<stdio.h>

int main(){
	const int minutesPerHour = 60;
	const float pi = 3.14;
	const char const_a = 'A';
	printf("%d\n",minutesPerHour);
	printf("%.2f\n",pi);
	printf("%c\n",const_a);
	
	//minustesPerHour += 2; -> it cannot be changed!
	//pi += 5;  -> it cannot be changed!
	const_a == 'Y'; //Invariant
	
	
}
