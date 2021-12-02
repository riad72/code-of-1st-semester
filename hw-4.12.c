#include <stdio.h>

int main()
{
 char  num, opselect;
 float fnum, snum;
 
 printf("Please type in two numbers: ");
 scanf("%f %f", &fnum, &snum);
 printf("Enter a select code:");
 printf("\n '+' for addition");
 printf("\n '*'for multiplication");
 printf("\n '/' for division\n");
 scanf("%c%c", &num, &opselect);
 printf("\nThe ascii code of opselect I get is %d.\n", opselect);
 
 switch (opselect)
 {
 case '+':
 printf("The sum of the numbers entered is %d\n", fnum+snum);
 break;
 case '*':
 printf("The product of the numbers entered is %d\n", fnum*snum);
 break;
 case '/':
 if (snum != 0.0)
 printf("The first number divided by the second is %d\n", fnum/snum);
 else
 printf("Division by zero is not allowed\n");
 break;
 }
 return 0;
 }