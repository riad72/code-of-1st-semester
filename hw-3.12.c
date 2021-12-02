#include<stdio.h>
#include<math.h>
#define SQFTPERQUART 200.0
#define PI 3.1416
int main()
{
	float width, outerRadius, innerRadius;
	float totalArea, innerArea, outerRimArea;
	float blue, red;
	printf("Enter the width of the display (in feet): ");
	scanf("%f", &width);
	
	outerRadius = width/2.0;
	innerRadius = 0.25*outerRadius;
	
	totalArea = PI * pow(outerRadius, 2);
	innerArea = PI*pow(innerRadius, 2);
	outerRimArea = totalArea - innerArea;
	
	red = innerArea/SQFTPERQUART;
	blue= outerRimArea/SQFTPERQUART;
	
	printf("\nThe inner area is %5.2f sq. feet", innerArea);
	printf("\nThe outer rim area is %5.2f sq. feet", outerRimArea);
	printf("\n\nRed paint required is %6.3f quarts", red);
	printf("\nBlue paint required is %6.3f quarts\n", blue);
	return 0;
}