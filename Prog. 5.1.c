#include<stdio.h>
int main()
{
   int num = 0;
   printf("Enter a number:");
   scanf("%d", & num);
   while( num>= 0)
   {
   int squre = num*num;
   int cube = num*squre;
   printf("%6d %6d %6d\n", num, squre, cube);
   printf("Enter a number :");
   scanf("%d", &num);
    }
    printf("The program exits for negative numbers.\n");
	return 0;
}