#include <stdio.h>

int main()
{
	float num1 , num2 , res ;
	char op ;
	printf("enter two numbers : \n");
	scanf("%f %f",&num1 , &num2);
	printf("enter the operator (+ - / * ) : \n");
	fflush(stdin);
	scanf("%c",&op);
	
	switch(op){
		
		case '+' : printf("the sum  =  %f ",num1+num2);break;
		case '-' : printf("the sub  =  %.2f ",num1-num2);break;
		case '*' : printf("the mul  =  %f ",num1*num2);break;
		case '/' : printf("the div  =  %f ",num1/num2);break;
		default :
		printf("error\n");
		
		
	}

    return 0;
}
