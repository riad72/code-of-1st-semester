#include<stdio.h>
int main()
{
	int code;
	printf("Please input the code:");
	scanf("%d", &code);
	if (code == 1)
	printf("The mobile is manufactured by Huawei");
	else if (code == 2)
	printf("The mobile is manufactured by Xiaomi");
	else if (code == 3)
	printf("The mobile is manufactured by Apple");
	else if ( code== 4)
	printf("The mobile is manufactured by Samsung");
	return 0;
	
	
}