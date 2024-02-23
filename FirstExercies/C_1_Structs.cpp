//Project Name: Structs

#include<stdio.h>
#include<string.h>
struct PersonalInfo {
	int Age;
	float Salary;
	char Name[30];
	char Gender[8];
};
	
int main(){
	struct PersonalInfo Personal1;
	strcpy(Personal1.Name, "Edward Klein");
	strcpy(Personal1.Gender, "Male");
	Personal1.Age = 25;
	Personal1.Salary = 25000;
	printf("Personal Name	: %s\n", Personal1.Name);
	printf("Personal Gender	: %s\n", Personal1.Gender);
	printf("Personal Age	: %d\n", Personal1.Age);
	printf("Personal Salary	: %.2lf\n", Personal1.Salary);
	
	struct PersonalInfo Personal2 = {26,27000,"Linda Brown", "Female"};
	printf("\nPersonal Name	: %s\n", Personal2.Name);
	printf("Personal Gender	: %s\n", Personal2.Gender);
	printf("Personal Age	: %d\n", Personal2.Age);
	printf("Personal Salary	: %.2lf\n", Personal2.Salary);
	
	struct PersonalInfo Personal3 = {35,45000,"Christian Powl", "Male"};
	printf("\nPersonal Name	: %s\n", Personal3.Name);
	printf("Personal Gender	: %s\n", Personal3.Gender);
	printf("Personal Age	: %d\n", Personal3.Age);
	printf("Personal Salary	: %.2lf\n", Personal3.Salary);
}
