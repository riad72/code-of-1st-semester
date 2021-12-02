#include<stdio.h>
//#define USER_NUM 0
#define MIN_NUM 1000
int main()
{
	int user_num = 0;
	int minimum = MIN_NUM;
	
	do{
	printf("Please enter a series of integer numbers:\n");
	printf("Enter -1 to finish the input:\n");
	scanf("%d", &user_num);
	
	 	
	 	if(MIN_NUM >user_num)
	 	minimum= user_num;
	 	
	 } 
	 while(user_num<=-1);
	 
	 printf("The minimum value is %d", minimum);
	
    


	return 0;
}