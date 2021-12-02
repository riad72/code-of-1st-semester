#include<stdio.h>
int main()
{
	int i, num, grade; 
	float avg, average, sum;
	printf("Please enter the number of students:"); 
	scanf("%d", &num);
	
	for(i=1; i<=num; i++)
	{
		printf("Enter a grade:");
		scanf("%d", &grade);		
		
	}
	if (grade>=60)
	
	printf("Average of the passed grades is %f\n", avg = grade/(sum=1.0));
	
	printf("Average of the failed grades is %f", average= grade/(sum=1.5));
	
	return 0;
}