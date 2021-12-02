#include<stdio.h>
int main()
{
	int numYears;
	printf("Please input the number of years:");
	scanf("%d", &numYears);
	if(numYears>5)
	printf("The interest rate is 7.5 percent");
	else
	printf("The interest rate is 4.5 percent");
	return 0;
}