#include<stdio.h>

void even_odd(int x){
	
	if(x%2==0){
		printf("This is an even number\n");
	}else{
		printf("This is an odd number\n");
	}
	
}

int main()
{
	int x;
	printf("Enter a number:");
	scanf("%d", &x);
	even_odd(x);
	
	
	
	return 0;
}