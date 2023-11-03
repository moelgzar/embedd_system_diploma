#include <stdio.h>
 main(void)
  {
    int row ,col;
    printf("enter the number  of row and columns  : \n");
    scanf("%d %d",&row,&col);
    int arr[row][col];
	int transpos[row][col];

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
             printf("enter element [%d][%d]: ",i , j);
            scanf("%d",&arr[i][j]);


        }
        printf("\n");


    }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {

            transpos[j][i] = arr[i][j];

        }
        printf("\n");


    }
 for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {

            printf("%d ",transpos[i][j]);

        }
        printf("\n");


    }

   }
