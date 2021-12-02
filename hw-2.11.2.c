#include<stdio.h>
int main()
{
	float time, distance, avgSpeed;
	distance = 204;
	avgSpeed = 68;
	time = distance/avgSpeed;
	printf("The elapsed time is %.2f\n", time);
	
	return 0;
	
}