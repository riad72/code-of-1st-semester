#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, c, s, t, area;
	printf("Please input the sides of the triangle:");
	scanf("%f%f%f", &a, &b, &c);
	s = (a+b+c)/2;
	t = (s*(s-a)*(s-b)*(s-c));
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	if (t < 0.0)
	printf("The three sides entered don't represent the sides of a triangle");
	else
	printf("The area of the triangle is %7.2f\n", area);
	return 0;
}