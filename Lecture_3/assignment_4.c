#include <stdio.h>
int main(void)
  { 
	int i , size;
	float sum = 0;
	printf("enter the size of arry : \n");
	scanf("%d",&size);
	float arr[size];
	
	for(i=1;i<=size;i++)
	{
		printf("enter the number : ");
		scanf("%f",&arr[i]);
		
		sum += arr[i]; 
	}
	printf("the average = %.2f \n" , sum/size);
	return 0;
	
   }