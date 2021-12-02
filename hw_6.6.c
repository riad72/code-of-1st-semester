#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int flip(int);
void percentages(int, int);

int main()
{
	int numTosses = 50000;
	int heads;
	
	heads= flip(numTosses);
	percentages(numTosses, heads);
	
	return 0;
}
int flip(int numTimes)
{
	int randValue;
	int heads = 0;
	int i;
	
	srand(time(NULL));
	
	for(i=1; i<=numTimes; i++)
	{
		randValue = 1+ (int)rand()% 100;
		if(randValue>90)
		heads++;
	}
	return (heads);
}
void percentages(int numTosses, int heads)
{
	int tails;
	float preheads, pretails;
	
	if (numTosses == 0)
	printf("There were no tosses, so no perentages can be calculated.\n");
	else
	{
		tails = numTosses - heads;
		printf("Number of coin tosses:%d\n", numTosses);
		printf("Heads: %d   Tails: %d\n", heads, tails);
		preheads = (float)heads/numTosses*100.0;
		pretails =(float)(numTosses - heads)/numTosses*100.0;
		printf("Heads came up %6.3f percent of the time.\n", preheads);
	    printf("Tails came up %6.3f percent of the time.\n", pretails);
}
}
