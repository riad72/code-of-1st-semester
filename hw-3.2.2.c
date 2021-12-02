#include<stdio.h>
#include<math.h>
int main()
{
	double x,y,z;
	x = 10.0;
	y = 1.0;
	z = sqrt(x-y);
	printf("The square root of x-y is %.2lf\n", z);
	return 0;
}