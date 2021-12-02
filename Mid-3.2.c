#include<stdio.h>
#include<math.h>
#define PI 3.1415926
int main()
{
	float a, P, i, start, end, radius;
	
	printf("Please inter the start and end of the range:");
	scanf("%f %f", &start, &end);
    printf("radius  area   perimeter\n");
    printf("------  ----   ---------\n");
    
    
	for(i=start; i<=end; i+=0.5){
		radius = i;
		printf("%2.2f %8.2f %10.2f\n", radius, a = PI*radius*radius, P = 2*PI*radius);
	}
	
	return 0;	
}