#include<stdio.h>
int main()
{
	float tax, price, tax_rate;
	
	printf("Please enter the price of the item:");
	scanf("%f", &price);
	
	if(price<100){
		tax_rate= 0.00;
	}
	if(100<=price &&  price<500){
		tax_rate=0.05;
	}
	if(500<= price  &&  price<1000){
		tax_rate= 0.10;
	}
	if(1000<=price){
		tax_rate=0.17;
	}
	tax = price* tax_rate;
	printf("The consumption tax of the item is %.3f", tax);
	return 0;
	
}