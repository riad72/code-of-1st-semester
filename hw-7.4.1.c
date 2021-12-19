#include<stdio.h>

int main()

{



  void toSec(float, float, float, float*, float *);

  float hours, minutes, seconds, resultAddr;

  printf("Enter the time:");

  scanf("%f %f %f", &hours, &minutes, &seconds);

  

  toSec(hours, minutes, seconds, &resultAddr);

  

  

  

  return 0;

  

}



void toSec(float hours, float minutes, float seconds, )

{

 toSec= hours*3600+ minutes*60+ seconds;	

	

}

​