#include<stdio.h>
int main()
{
	int a[10], i, sum=0;
	
	printf("Enter the valus of the array:\n");
	for(i=0; i<10; i++)
	{
		
		scanf("%d", &a[i]);
		
	}
	
	for(i=0; i<10 ; i++)
	{
	 sum = sum+a[i];	
	}
	
	printf("The sum of the arrays is :%d", sum);
	
	
}