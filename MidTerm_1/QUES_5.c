#include <stdio.h>
#include <stdlib.h>
int count_num_of_ones(int num);
int main()
{
    int num;
    printf("enter the number \n");
    scanf("%d",&num);
printf("%d",count_num_of_ones(num));


    return 0;
}
int count_num_of_ones(int num)
{
     int flag=0 ;
    while(num!=0)
    {
        int rem;
        rem = num%2 ;
        num = num/2 ;
        if(rem == 1) flag++;


    }
    return flag;
}

