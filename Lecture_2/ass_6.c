#include <stdio.h>

int main()
{
    
	int fact,res = 1;
	printf("enter the number fo calculate factural : \n");
	scanf("%d",&fact);
	if(fact <= 0 )
	{
		printf("error\n");
		
	}
	else{
	for(int i=fact ; i >0 ; i--)
	{
		res *=i  ;
	}
	printf("%d" ,res);
	}
    return 0;
}
