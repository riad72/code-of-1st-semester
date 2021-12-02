#include<stdio.h>
int main()
{
	float radius, circumference;
	printf("Enter the radius of a circle:");
	scanf("%f", &radius);
	circumference = 2*3.1416*radius;
	printf("The circumference of the circle is %.2f\n", circumference);
	return 0;
}