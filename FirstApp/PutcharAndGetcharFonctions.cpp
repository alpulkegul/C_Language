//Project Name: Putchar & Getchar Fonctions - Geometric Calculations

#include<stdio.h>
int main(){
	/*
	int n1,n2,sum;
	printf("Enter 2 number: ");
	scanf("%d%d",&n1,&n2);
	
	sum = n1+n2;
	
	printf("Sum = %d",sum);
	return 0;
	*/
	
	/*
	char studentGrade;
	printf("Enter the student's exam grade(A,B,C,D etc): ");
	studentGrade = getchar();
	putchar(studentGrade);
	*/
	
	/*
	
	//Calculating the area and perimeter of a rectangle
	
	int length, width, area, perimeter;
	
	printf("Enter the length of the rectangle:");
	scanf("%d",&length);
	printf("Enter the width of the rectangle:");
	scanf("%d",&width);
	
	perimeter = 2*(length + width);
	area = length * width;
	printf("Area of rectangle: %d\nPerimeter of rectangle: %d", area, perimeter);
	*/
	
	//Calculating the diameter and circumference of a circle
	//Calculate the area of a circle	
	
	float radius, diameter, area, perimeter;
	printf("Enter the radius of the circle: ");
	scanf("%f",&radius);
	
	diameter 	= 2 * radius;
	perimeter	= 2 * 3.14 * radius;
	area		= 3.14 * (diameter * radius);
	
	printf("The diameter of the circle is %.2f units.\n",diameter);
	printf("The area of the circle is %.2f units.\n",area);
	printf("The perimeter of the circle is %.2f units.\n",perimeter);
	
	/*
	pi is registered as 'M_PI' in the 'math' library. To use it;
	1. Define the library -> #include<math>
	2. Replace '3.14' with the 'M_PI' command.
	*/
	
}
