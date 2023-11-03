#include <stdio.h>
int main(void)
  {


	int arr1[2][2] ;
	int arr2[2][2] ;
	int res[2][2] ;

	printf("enter element of arry_1 :\n");


	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++)
		{
		printf("enter element:[%d][%d] : ",i , j);
		scanf("%d",&arr1[i][j]);

		}

	}
	printf("enter element of arry_2 :\n");


	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++)
		{
		printf("enter element:[%d][%d] : ",i , j);
		scanf("%d",&arr2[i][j]);

		}

	}
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++)
				{

			res[i][j] = arr1[i][j] + arr2[i][j];
			printf("%d ",res[i][j]);

			}
			printf("\n");
		}


	return 0;

   }
