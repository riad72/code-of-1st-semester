#include<stdio.h>
int main(){

#define MSIZ 81
char message[MSIZ];

printf("Enter a string:\n");
gets(message);
printf("The string just entered is :\n");
puts(message);


return 0;
}