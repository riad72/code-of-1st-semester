#include<stdio.h>
int main()
{
	int marks;
	printf("Please input the marks:");
	scanf("%d", &marks);
	if (marks>=90)
	printf("The obtained grade is A");
	else if(marks<90 || marks>=80)
	printf("The obtained grade is B");
	else if(marks<80 || marks>=70)
	printf("The obtained grade is C");
	else if (marks<70 || marks>=60)
	printf("The obtained grade is D");
	else 
	printf("The obtained grade is F");
	return 0;
}