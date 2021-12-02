#include<stdio.h>
int main()
{ 
float temperature;
printf("Please enter the temperature:");
scanf("%f", &temperature);
if(temperature>100.0)
printf("above the boiling point of water");
else
printf("below the boiling point of water"); 
return 0;
}