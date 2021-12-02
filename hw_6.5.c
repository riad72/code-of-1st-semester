#include<stdio.h>
#include<math.h>
#define PI 3.1416

float orbit_perimeter(float a, float b){
	
	float temp = sqrt(2*((a*a)+(b*b)));
	float result = PI* temp;
	return result;
	
}

int main(){
	
	float a, b;
	printf("Enter the length of a: ");
	scanf("%f", &a);
	
	printf("Enter the length of b: ");
	scanf("%f", &b);
	float perimeter= orbit_perimeter(a,b);
	printf("The calculated perimeter is %.3f", perimeter );
	return 0;
	
	
}