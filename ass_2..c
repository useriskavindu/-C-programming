#include <stdio.h>
void main(){

int m,n,i,j,k,sum;

    printf("Enter number of rows for Table A:\n");
    scanf("%d",&m);

    printf("Enter number of columns for A:\n");
    scanf("%d",&n);

    int A[m][n];

//-----------------------------------------------------------------------------------
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("Enter values for M1[%d][%d]::", i,j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nTable A::\n\n");
//-----------------------------------------------------------------------------------
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("    %d  ",A[i][j]);

        }   printf("\n");
    }
//-----------------------------------------------------------------------------------

    printf("\n-----------------------------------------------------------------------");

    printf("\n\nEnter number of rows for List X:\n");
    scanf("%d",&k);

    int X[k];
//-----------------------------------------------------------------------------------

    if(n!=k){printf("\n\"The orders of two matrices does not match. Multiplication between A and X cannot be done\"");}
    else
{
    for(j=0; j<k; j++)
    {
            printf("Enter values for List X[%d][%d]::", j,0);
            scanf("%d", &X[j]);
    }

    printf("\nList X::\n\n");
//-----------------------------------------------------------------------------------
    for(j=0; j<k; j++)
    {
            printf("    %d  ",X[j]);

           printf("\n");
    }

    printf("\n-----------------------------------------------------------------------");

//-----------------------------------------------------------------------------------

   printf("\n\nMultiplication::\n\n");

   int Y[i];

   for(i=0; i<m; i++)
   {
       sum=0;
       for(j=0; j<n; j++)
       {
           sum = sum + A[i][j]*X[j];
       }

       Y[i] = sum;
       printf("Y[%d][%d] = %d\n", i+1,0,Y[i]);
   }


        printf("\n List Y::\n\n");
        for(int i=0; i<m; i++)
        {
            printf("    %d\n", Y[i]);

        }

}


return 0;}
