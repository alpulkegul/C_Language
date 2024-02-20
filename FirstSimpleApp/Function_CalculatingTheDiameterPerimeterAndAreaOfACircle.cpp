//Project Name: Function - Calculating the Diameter, Perimeter and Area of a Circle

#include<stdio.h>
#include<math.h> //M_PI

float diameterCalc(float radius){
	return (2*radius);
}
float perimeterCalc(float radius){
	return (2 * M_PI * radius);
}
float areaCalc(float radius){
	return (M_PI * radius * radius);
}

int main(){
	float radius, diameter, area, perimeter;
	
	printf("Enter the radius of the circle: ");
	scanf("%f", &radius);
	
	diameter = diameterCalc(radius);
	perimeter = perimeterCalc(radius);
	area = areaCalc(radius);
	
	printf("The diameter of the circle is %.2f units.\n",diameter);
	printf("The perimeter of the circle is %.2f units.\n",perimeter);
	printf("The area of the circle is %.2f units.",area);
	
	return 0;
}

