#include<stdio.h>
int main()
{
	float length, width, area;
	printf("Enter the length of the room:");
	scanf("%f", &length);
	printf("Enter the width of the room:");
	scanf("%f", &width);
	area = length*width;
	printf("The area of the room is: %.2f\n", area);
	return 0;
}