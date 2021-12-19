#include<stdio.h>
int main()
{
	void date(int, int*, int*, int*);
	int yyyymmdd, year, month, day;
	
	printf("yyyymmdd:\n");
	scanf("%d", &yyyymmdd);
	
	date(yyyymmdd, &year,&month,&day);
	
	printf("The year: %d\nThe month: %d\nThe day: %d\n", year, month, day);
	
	
	return 0;
}

 void date(int time, int *yar, int *mnth, int *dy)
 {
 	*yar = time/10000;
 	*mnth= (time/100)%100;
 	*dy = time%100;
 	
 }