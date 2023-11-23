#include <stdio.h>
#include <stdlib.h>
int calc_prime_num( int nmm );
int main()
{
    int num1, num2;
    printf("enter two numbers intervals :  \n");
    scanf("%d%d",&num1,&num2);
    for(int i=num1+1;i<num2;i++)
    {
         if(!calc_prime_num(i))
         {
             printf("%d ", i);
         }
    }


    return 0;
}
int calc_prime_num( int num )
{
     int i =0 ;
     int flag = 0;
     for(i=2;i<num/2;i++)
     {
         if(num%i == 0)
         {
             flag = 1 ;

         }
     }
    return flag ;
}


