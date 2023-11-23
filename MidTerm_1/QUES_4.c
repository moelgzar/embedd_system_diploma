#include <stdio.h>
#include <stdlib.h>
void revers_digit_num(int num);

int main()
{
    int num;
    printf("enter the number \n");
    scanf("%d",&num);
    revers_digit_num(num);


    return 0;
}
void revers_digit_num(int num)
{


    while(num!=0)
    {
        int rem;
        rem = num%10;
        num = num/10;
        printf("%d",rem);


    }

}

