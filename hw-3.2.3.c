#include<stdio.h>
#include<math.h>
int main()
{
	int num, absValu;
	float b;
	scanf("%d %f",&num ,&b);
	absValu = abs(num);
	printf("The absolute value of num is %d\n", num, absValu);
	return 0;
}