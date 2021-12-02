#include <stdio.h>
int main()
{
	int num, score, a = 0, b = 0;
	char grade;
	float pass ,fail;
	printf("Please enter the number of students: ");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++)
	{
		printf("Please enter a grade: ");
		scanf("%d", &score);
		if (score >= 80)
		{
		printf("Your grade is A");
		
		}
		else if (score <60)
		{
		printf("Your grade is F");
		}
		else if( score >60 && score<=70)
		{
		 printf("Your grade is C");	
		} else if( score > 70 && score <= 80)
		{
		printf("Your grade is F");	
		}
	}
	return 0;
}