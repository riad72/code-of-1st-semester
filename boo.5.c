#include <stdio.h>
void date(int year, int month, int day)
{
	int a, b, c;
	a = year / 10000, b = (month / 100) % 100, c = day % 100;
	printf("%d%d%d", a, b, c);
}

int main()
{
	int day, month, year;
	scanf("%d %d %d", &year, &month, &day);
	date(year, month, day);
	return 0;
}