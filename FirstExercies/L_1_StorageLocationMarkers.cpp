//Project Name: Storage Location Markers

#include<stdio.h>

/*void valueIncrease(int k){
	auto int i=0;
	printf("%d\n",i);
	i+=k;
}

int main(){
	valueIncrease(3);
	valueIncrease(3);
	valueIncrease(3);
	valueIncrease(3);
	valueIncrease(3);
	return 0;
}*/





/*void valueIncrease(int k){
	static int i=0;
	printf("%d\n",i);
	i+=k;
}

int main(){
	valueIncrease(3);
	valueIncrease(3);
	valueIncrease(3);
	valueIncrease(3);
	valueIncrease(3);
	return 0;
}*/


/*int x=4;
int y=16;

int main(){

	extern int y;
	printf("x in global: %d\n",x);
	printf("y in extern: %d",y);
	return 0;

}*/

int main(){
	register int i;
	int nArray[5] = {5,8,6,405,54};
	for (i=0; i<5;i++){
		printf("Number array[%d] = %d\n",i,nArray[i]);
	}
	return 0;
}






