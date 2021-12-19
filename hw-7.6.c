#include<stdio.h>
int main()
{
	void findMax(float, float, float *);
	float firstnum, secnum, max;
	
	printf("Enter a number:");
	scanf("%f", &firstnum);
	printf("Great! please enter a second number:");
	scanf("%f", &secnum);
	
	findMax(firstnum, secnum, &max);
	
	printf("\nThe maximum of the two numbers entered is %f\n", max);
	
	return 0;
}
 
void findMax(float x, float y, float *max)
{
	
	if (x>=y)
	*max = x;
	else 
	*max = y;
	
}