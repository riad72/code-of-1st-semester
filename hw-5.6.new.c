#include<stdio.h>
#define CUTOFF -1.0
int main()
{
	float a = 0.0;
	float maximum = CUTOFF;
	printf("Enter a number to find the maximum value:");
	while(a>CUTOFF){
	     scanf("%f", &a);
		
		if (a>maximum)
		
		 maximum = a;
		
	}
		 printf("The maximum value is %f", maximum);
 return 0;	
}