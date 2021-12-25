#include<stdio.h>
int main()
{
	int rates[9] = {18.24,25.63,5.94,33.92,3.71,32.84,35.93,18.24,6.92};
	int i;
	float max= rates[0], min= rates[0];
	
	for(i=1 ;i<9; i++){
		if(max< rates[i])
		max = rates[i];
		else
		min = rates[i];
	}
	
	printf("Maximun valu is %.2f\n", max);
	printf("Minimum valu is %.2f", min);
	
	
	
	return 0;
}