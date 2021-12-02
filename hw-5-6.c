#include<stdio.h>
#define CUTOFF -1
int main()
{
	float num = 0;
	float maximum = CUTOFF;
	while ( num > CUTOFF )
	{
	 printf("Enter a number to find ot the maximum value:");
	 scanf("%f", &num);
	 if (num>=maximum)
	 maximum = num;	
		
	}
	printf("The maximum value is %f", maximum);
	return 0;
	
	
}