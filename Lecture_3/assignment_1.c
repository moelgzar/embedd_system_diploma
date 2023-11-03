#include <stdio.h>
int main(void)
   {
	int i  , n;
	float num  , sum=0 , avg=0 ; 
	printf("enter the list of number (n) : \n");
	scanf("%d" ,&n );
	for(i=0 ; i <=n ; i++ )
	{
		printf("enter the number :");
		scanf("%f",&num);
		if(num<0.0)
		{
			break;
		
		}
	sum +=num; 	

	}
	avg = sum/(i);
	printf("the average = %f \n" ,avg );
	
	return 0;
	
   }