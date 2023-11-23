#include <stdio.h>
#include <stdlib.h>
int power(int num , int p);
int main()
{
    int num1 , n , res;
    printf("enter base number  :  \n");
    scanf("%d",&num1);
    printf("enter power number  :  \n");
    scanf("%d",&n);

    res = power(num1 , n+1);
    printf("%d ^ %d =  %d",num1 , n , res);

    return 0;
}
int power(int num , int p)

{
    if(p!=1)
   return num * power(num , p-1);
   else{
    return 1;
   }
}
