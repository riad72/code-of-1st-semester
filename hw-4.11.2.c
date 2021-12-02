#include<stdio.h>
int main()
{
	int code;
	printf("Please input the code:");
	scanf("%d", &code);
	
	switch(code)
	{
		case 1:
			printf("The mobile is manufactured by Huawei");
			break;
			case 2:
				printf("The mobile is manufactured by Xiaomi");
				break;
				case 3:
					printf("The mobile is manufactured by Apple");
					break;
					case 4:
						printf("The mobile is manufactured by Samsung");
		
	}
	
	return 0;
}