#include<stdio.h>
int main()
{
	float a, b, c, d, e, average;
	printf("Enter the first number:");
	scanf("%5f", &a);
	printf("Enter the second number:");
	scanf("%5f", &b);
	printf("Enter the 3rd number:");
	scanf("%5f", &c);
	printf("Enter the 4th and 5th numbers:");
	scanf("%5f %5f", &d, &e);
	average = (a+b+c+d+e)/5;
	printf("The average of the 5 numbers is: %6.2f\n", average);
	return 0;
}