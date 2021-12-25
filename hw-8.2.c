#include<stdio.h>
 int main()
 {
 	int price[10], quantity[10], amount[10];
 	int i;
 	
 	printf ("Quantity\n-------\n");
 	
 	for(i=0; i<10; i++)
 	{
 	  scanf("%d", &quantity[i]);	
 		
	 }
 	  printf("Price\n-------\n");
 	 for(i=0; i<10; i++)
	  {
	  	
	  scanf("%d", &price[i]);	
	  	
	  } 
	  
	  for(i=0;i<10; i++)
	  {
	  	amount[i]= quantity[i]*price[i];
	  }
	  printf("Amount\n-------\n");
	  for(i=0;i<10;i++){
	  	printf("%d ", amount[i]);
	  }
	  return 0;
	  
 }
 