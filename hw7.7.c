#include<stdio.h>
int main()
{
	void div(int, int);
	int x,y;
	printf("Enter two numbers:");
	scanf("%d%d",&x,&y);
	
	div(x,y);
	
	
	return 0;
}

  void div(int a, int b)
  {
  	int divisor, remainder;
  	
  	divisor= a/b;
  	remainder= a%b;
  	printf("The divisor is %d\nThe remainder is %d", divisor, remainder);
  }