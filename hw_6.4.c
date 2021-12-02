#include<stdio.h>
#define PI 3.1415926

float area(float r){
	float a= PI*r*r;
	return a;
}

int main()
{ float a, r;
 printf("Enter the radius:");
 scanf("%f", &r);
 float result = area(r);
 printf("The area of the triangle is %.2f", result);
 return 0;
	
}