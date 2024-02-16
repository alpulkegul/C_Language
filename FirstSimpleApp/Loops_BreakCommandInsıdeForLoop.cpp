//Project Name: Loops - Break Command Insýde For Loop

#include<stdio.h>
int main(){
	for (int i = 1; i<=10; i++){
		if(i==4)
			break;
	
		printf("%d\n",i);
	}
	
	int i = 1;
	while (i <= 10){
		if(i==4)
			break;
	
		printf("%d\n",i);
		i++;
	}
	
	i = 2;
	do{
		if(i==4)
			break;
	
		printf("%d\n",i);
		i++;
	}while (i <= 10);
	
}
