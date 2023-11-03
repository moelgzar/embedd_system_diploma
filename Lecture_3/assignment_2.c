#include <stdio.h>
int main(void)
   {
	int i  , n;
	float num  , mul=1 ; 
	printf("enter the list of number (n) : \n");
	scanf("%d" ,&n );
	for(i=1 ; i <=n ; i++ )
	{
		printf("enter the number %d :", i);
		scanf("%f",&num);
		if(num==0.0)
		{
			continue;
		
		}
	    mul *=num; 	

	}

	printf("the product = %f \n" ,mul );
	
	return 0;
	
   }