#include<stdio.h>
int main()
{
	void newval(float *);
	float testval;
	printf("Enter a number:");
	scanf("%f", &testval);
	
	printf("The address that will be pointed is %u\n\n", &testval);
	
	newval(&testval);
	
	printf("The new value of testval is %5.2f\n", testval);
	
	return 0;
}

 void newval( float *xnum)
 {
 	
 	printf ("\n From newval(): The  value pointed by xnum is %5.2f\n", *xnum);
 	*xnum = *xnum+20.2;
 }