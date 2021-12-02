#include<stdio.h>
#include<math.h>

float squareIt(float x){
	float square= x*x;
	return square;
	
}

int main()
{
	float result= squareIt(10);
	printf("The square is %f", result);
	return 0;
}