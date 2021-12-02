#include<stdio.h>
#define MAXCUR 99
int main()
{
	float usd,cny ;
	printf(" USD   CNY\n");
	printf(" ----  ---- \n");
	for(usd= 1.0; usd<= MAXCUR ; usd++)
	{
		printf(" %.1f %5.1f\n", usd, (cny= usd*6.4));
		
	}
	return 0;
}