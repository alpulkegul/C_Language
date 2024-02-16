//Project Name: Loops - Continue Command Insýde For Loop

#include<stdio.h>
int main(){
		
	for (int i = 0; i < 10; i++){
		if(i==7)
			continue;
		if(i==1)
			continue;
		if(i==5)
			continue;
		printf("%d\n",i);
	}
	
	printf("-----\n");
	
	int i = 0;
	while(i < 10){
		if(i==7)
			continue;
			
		printf("%d\n",i);
		i++;
	}

	printf("-----\n");
	i = 0;

}



