//Project Name: Conditional Expressions - Profit and Loss Calculation

#include<stdio.h>
int main (){
	int cost, salePrice, profitLoss;
	
	printf("Enter the cost price: ");
	scanf("%d",&cost);
	printf("Enter the sale price: ");
	scanf("%d",&salePrice);
	
	if(salePrice > cost){
		profitLoss = salePrice - cost;
		printf("Profit made: %d",profitLoss);
	}
	else if (salePrice < cost){
		profitLoss = salePrice - cost;
		printf("Loss made: %d",profitLoss);
	}else
		printf("No profit or loss on product sales.");	
}	
	
