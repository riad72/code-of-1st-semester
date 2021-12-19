#include<stdio.h>

int main()
{
	void toSec(int, int, int, int *);
	int hrs, mins, secs, result;
	
	printf("Enter Hours:");
	scanf("%d", &hrs);
	printf("Enter Minutes:");
	scanf("%d", &mins);
	printf("Enter Seconds:");
	scanf("%d", &secs);
	
    toSec(hrs, mins, secs, &result);
	
	printf("The total number of seconds is: %d", result);	
	return 0;
}

 void toSec(int hours, int minutes, int seconds, int *resultAddr)
 {
 	*resultAddr = hours*3600+ minutes*60 + seconds;
 	
 }