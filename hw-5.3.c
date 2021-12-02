#include<stdio.h>
#define CUTOFF -1
#define SPEED 350
int main()
{
	float time, distance = 0.0;
	printf("Enter the distance(in km.) to know the time required by (CRH) train");
	for ( distance= 0.0; distance> CUTOFF; distance++) 
	{
		printf("\nEnter the distance:");
		scanf("%f", &distance);
		printf("The required time is: %4.2f hrs\n", (time= distance/SPEED));
		
	}
	return 0;
}