#include <stdio.h>
#include <stdlib.h>
int main(void){

    int num ,i,rem=0;
    printf("enter the number \n");
    scanf("%d",&num);

        while(num!=0){

          rem += num%10;
          num = num/10;
        }

printf("%d",rem);



    return 0;
}
