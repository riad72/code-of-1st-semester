#include<stdio.h>
int main()
{
	int n, a, d, sum;
	n = 100;
	a = 1;
	d = 1;
	sum = (n/2)*(2*a+(n-1)*d);
	printf("The sum of the numbers from 1 to 100 is %d\n", sum);
	
	return 0;
}