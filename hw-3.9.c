#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c, s, area;
	a= 3;
	b= 4;
	c= 5;
	s= (a+b+c)/2;
    area= sqrt(s*(s-a)*(s-b)*(s-c));
	printf("The area of the triangle is %.2lf\n", area);
	return 0;
	
}