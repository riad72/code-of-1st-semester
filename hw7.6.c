#include<stdio.h>
int main()
{
	void findMax(float,float);
	float firstnum, secnum, max;
	
	printf("Enter the first number:");
	scanf("%d", &firstnum);
	printf("Great! Enter the second number:");
	scanf("%d", &secnum);
	
	findMax(firstnum, secnum);
	
//	printf("The maximum of the two number is %f", max);
	
	return 0;
}

 void findMax(float x, float y)
 {
 	float max;
 	if(x>=y)
 	max= x;
 	else
 	max= y;
 	printf("The maximum of the two number is %f", max);
 	
 }