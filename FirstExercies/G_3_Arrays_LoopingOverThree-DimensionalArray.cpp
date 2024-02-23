//Project Name: Looping Over Three-Dimensional Arrays

#include<stdio.h>
int main(){
	int myMatrix [2][3][4]={{{3,5,8,5},{6,9,4,1},{5,6,9,7}},{{13,6,8,9},{5,3,9,1},{3,8,7,1}}};
		
	int i,j,k;
		
	for(i=0;i<2;i++){
		for(j=0;j < 3; j++){
			for(k=0;k<4;k++){
				printf("%d - ",myMatrix[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
		
		
		
		
}

