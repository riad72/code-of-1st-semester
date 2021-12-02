#include<stdio.h>
int main()
{
	int num = 0 , failnum = 0, passnum= 0, grade;
	int fail_count= 0, pass_count= 0;
	
	int pass, fail, avg, avge, i;
	printf("Please enter the number of students:");
	scanf("%d", num);
	int user = num;
	
	for(i=1; i<=user; i++){
	printf("Please enter a grade:");
	scanf("%d", grade);
	if(grade<60){
	
	
	fail =failnum;
	fail_count++;
    }else{
	
	(grade>=60);
	
	pass= passnum;
	pass_count++;	
	
    }
	printf("Average of the passed grade is %d", avg = pass_count/passnum);
	printf("Average of the failed grade is %d", avge = fail_count/failnum);

	}
	
	 return 0;
	
	
}