#include<stdio.h>
int main()
{
	float i, num, grade, average; 
	printf("Please enter the number of students:"); 
	scanf("%d", &num);
	
	for(i=1; i<=num; i++)
	{
		printf("Enter a grade:");
		scanf("%f", &grade);		
		
	}
	
	return 0;
}