#include<stdio.h>

int main()
{
	void calc (float, float, float, float *, float * );
	float n1, n2, n3, sum, prod;
	
	printf("Enter three numbers:");
	scanf("%f%f%f", &n1, &n2, &n3);
	
	calc(n1,n2,n3,&sum,&prod);
	
	printf("The sum of the numbers is %5.2f\n", sum);
	printf("The product of the numbers is %5.2f", prod);
	
	return 0;
}

 void calc(float num1, float num2, float num3, float *sumaddr, float *prodaddr)
 {
 	*sumaddr = num1+ num2+ num3;
 	*prodaddr = num1* num2* num3;
 	
 }