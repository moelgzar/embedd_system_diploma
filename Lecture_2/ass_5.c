#include <stdio.h>

int main()
{
	
	int num  , sum =0 ;
	printf("enter the number: \n");
	scanf("%d",&num);
	for(int i=0 ;i<=num;i++)
	{
		sum += i ;
	}
	printf("the sum = %d",sum);
	

    return 0;
}
