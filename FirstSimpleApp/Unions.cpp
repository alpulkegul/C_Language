//Project Name: Unions

#include<stdio.h>
#include<string.h>

union Veri{
	int i;
	float f;
	char str[20];
};

int main(){
	union Veri veri;
	
	veri.i = 25;
	veri.f = 150.5;
	strcpy(veri.str, "Unions");
	
	printf("Size of the data: %d\n",sizeof(veri));
	printf("veri.i		: %d\n", veri.i);
	printf("veri.f		: %.2lf\n", veri.f);
	printf("veri.str	: %s\n", veri.str);
	
	veri.i = 100;
		
	printf("Size of the data: %d\n",sizeof(veri));
	printf("veri.i		: %d\n", veri.i);
	printf("veri.f		: %.2lf\n", veri.f);
	printf("veri.str	: %s\n", veri.str);
	
	veri.f = 125.2456454;
	
	printf("Size of the data: %d\n",sizeof(veri));
	printf("veri.i		: %d\n", veri.i);
	printf("veri.f		: %.2lf\n", veri.f);
	printf("veri.str	: %s\n", veri.str);
	
}
