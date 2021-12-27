#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define NUMR 10
#define NUMC 20
int findMax(int arr[NUMR][NUMC]);
void display(int arr[NUMR][NUMC]);

int main()
{
	int arr[NUMR][NUMC];
	int i,j;
	srand(time(NULL));
	for(i=0; i<NUMR; i++)
	
	for(j=0; j<NUMC; j++)
	arr[i][j] = rand() % 1000;
	
	display(arr);
	
	int max;
	max = findMAx(arr);
	printf("Max:%d\n", max);
	
	
	return 0;
		
}

int findMAx(int arr[NUMR][NUMC])
{
	int i, j;
	int max=-1;
	for(i=0;i<NUMR; i++)
	for(j=0;j<NUMC; j++)
	if(arr[i][j]> max)
	max = arr[i][j];
	
	return max;
		
}
void display(int arr[NUMR][NUMC])
{
	int i,j;
	for(i=0;i<NUMR;i++){
	
	for(j=0;j<NUMC;j++)
	printf("%3d", arr[i][j]);
	
	printf("\n");
}
}