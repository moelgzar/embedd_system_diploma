#include "stdio.h"
void main(void)
{
	
	float x , y , z ;
	
	printf("enter three numbers : \n");
	fflush(stdin);
	scanf("%f%f%f",&x ,&y ,&z );
	if(x > y && x > z)
	{
		printf("x is largest number \n");

	}
	else if (y > x && y > z )
	{
		printf("y is largest number \n");

	}
			
	else if (z > x && z > z )
	{
		printf("z is largest number \n");
	}
	
	
	
	
}