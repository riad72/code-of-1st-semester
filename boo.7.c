#include <stdio.h>
void div(int x, int y)
{
	float a;
	int b;
	a = x / y, b = x % y;
	printf("%.3f %d", a, b);
	
}
int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	div(x, y);
	return 0;
}