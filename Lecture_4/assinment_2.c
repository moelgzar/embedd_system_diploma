#include <stdio.h>
#include <stdlib.h>
int fact(int num);
int main()
{
    int num1 , res;
    printf("enter number positive intiger :  \n");
    scanf("%d",&num1);
    res = fact(num1);
    printf("%d",res);

    return 0;
}
int fact(int num)
{
    if(num!=1)
   return num*fact(num-1);
}
