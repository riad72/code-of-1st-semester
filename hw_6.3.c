#include<stdio.h>
#define SPEED 350
float calc_time(float dis){

	
float time = dis/SPEED;
return time;
	
}

int main()
{
	
	float dis, result, time;
	for(;;){
		printf("Enter the distance :");
		scanf("%f", &dis);
		
		if(dis>0){
			result =calc_time(dis);
			printf("The required time is %f hours\n", result);
		}else{
			printf("Distance can't be negative");
			break;
		}
		
}
	return 0;
	
	
}