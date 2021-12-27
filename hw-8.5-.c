#include<stdio.h>
void extend(float amount[], float price[], float quantity[]);

int main()
{
	float price[10] ={10.62, 14.89, 13.21, 16.55, 18.62,9.47, 6.58, 18.32,12.15, 3.98};
	float quantity[10] = {4, 8.5, 6, 8.35,9, 15.3, 3, 5.4,2.9, 4.8};
	float amount[10];
	
	
	extend(amount, price, quantity);
	printf("Quality   Price   Amount\n");
	printf("-------   ------  ------\n");
	
	int i;for(i=0; i<10; i++){
		
		printf("%6.2f %7.2f %7.2f\n", quantity[i], price[i], amount[i]);
	}
	
	return 0;
}

void extend(float amount[10], float price[10], float quantity[10])
{
	
	int i=0;
	
	for(i=0;i<10; i++)
	
	amount[i] = price[i] * quantity[i];
}