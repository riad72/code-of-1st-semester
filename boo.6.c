#include <stdio.h>
void findmax (int a, int b)
{
	if (a > b)
	printf("The maximum of the two numbers entered is %d", a);
	else 
	printf("The maximum of the two numbers entered is %d", b);
}

int main()
{
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	findmax(a, b);
}