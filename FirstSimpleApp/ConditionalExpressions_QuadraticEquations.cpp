//Project Name: Contditional Expressions - Quadratic Equations

#include<stdio.h>
#include<math.h> // sqrt
int main(){
	float a,b,c;
	float root1, root2, imaginer;
	float discriminant;
	
	printf("Enter the coefficients a, b, c of the quadratic equation (ax^2 + bx + c):");
	scanf("%f%f%f", &a, &b, &c);
	
	discriminant = (b * b) - (4 * a * c);
	
	if (discriminant > 0){
		root1 = (-b + sqrt(discriminant)) / (2*a);
		root2 = (-b - sqrt(discriminant)) / (2*a);
		printf("There are two discrete and real roots: %.2f and %.2f",root1, root2);
	}
	else if(discriminant == 0){
		root1 = root2 = - b / (2 * a);
		printf("There are two real roots equal to each other: %.2f and %.2f", root1, root2);		
	}
	else{
		root1 = root2 = -b/(2*a);
		imaginer = sqrt(-discriminant) / (2*a);
		printf("There are two discrete and complex roots: %.2f + i%.2f and %.2f - %.2f",root1,imaginer,root2,imaginer);
	}
	return 0;		
	
	
}
