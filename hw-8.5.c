#include<stdio.h>
void extend(float[], float[],float[]);

int main()
{
	float price[10]= {10.62,14.89,13.21,16.55,18.62,9.74,6.58,18.32,12.15,3.98};
	float quantity[10]= {4.0,8.5,6.0,8.35,9.0,15.3,3.0,5.4,2.9,4.8};
	
   extend(price,quantity);
	
	return 0;
}

void extend(float amount[], float Price[], float Quantity[])
{
	int i;
	
	for(i=0; i<10; i++){
		
		amount[i]= Price[i]*Quantity[i];
	}
	 printf("The amount is %f", amount[i]);
	
}