//Project Name: Looping Over Two-Dimensional Arrays

#include<stdio.h>

int main(){
	
	int myMatrix[2][3]={{1,4,5},{9,2,7}};
	
	for(int i = 0; i < 2; i++){
		for (int j=0;j<3;j++){
			printf("%d\n", myMatrix[i][j]);
			
		}
		printf("\n");
	}
	return 0;
}
