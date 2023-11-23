#include <stdio.h>

int sumNumbers(int n) {
    
    return n * (n + 1) / 2;
}

int main() {
    int result = sumNumbers(100);

    printf("Sum of numbers from 1 to 100: %d\n", result);

    return 0;
}
/*
 //------------ using recursion -----------//
int sum_num(int num);

int main()
{int num = 100 ;
    printf("%d",sum_num(num));
    return 0 ;
}

int sum_num(int num)
{

    int ret = 1;
        if(num == 1)
        {
        }
        else
    return (num+sum_num(num-1));
}
*/