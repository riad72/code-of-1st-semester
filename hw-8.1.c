#include<stdio.h>
int main()
{ 
 int temp[15];
 int sum = 0, i;
 float avg;
 
 printf("Enter the numbers:\n");
 
 for(i=0; i<15; i++){
 	scanf("%d", &temp[i]);
} 
 for(i=0; i<15; i++){
 	
 	sum= sum + temp[i];

 }
 	avg= sum/15.0;  
 	
  printf("The average of those numbers is: %f", avg);
 
 
 
 return 0;
  
}