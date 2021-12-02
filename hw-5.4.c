#include<stdio.h>
int main()
{
	int a, b, num;
	printf("Enter the total number of students:");
	scanf("%d", &num );
	for(a=1; a<=num; a++){
		printf("Please enter your grade:");
		scanf("%d", &b);
		if(b<60){
			printf("F\n");
		}else if(b<70){
			printf("C\n");
		}else if(b<80){
			printf("B\n");
		}else if(b<100){
			printf("A\n");
		}
	}
	
	
	return 0;
}