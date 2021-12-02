#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
	int a, b, p;
	printf(" a     b      P  \n");
	printf(" ----  -----  ----\n");
	for(a=300; a<=400; a+=10){
		for(b=200;b<=300;b+=10){
			p = PI*sqrt(2*(a*a+b*b));
			printf("%d    %3d     %5d\n", a, b, p);
		}
	}
	return 0;
}