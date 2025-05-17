#include <stdio.h>

void main()
{
    int i,j,a1[2][2],a2[2][2],a3[2][2];
    printf("enter element a1 : ");

    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            scanf("%d",&a1[i][j]);
        }
        printf("\n");
    }

    printf("enter element a2 : ");

    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            scanf("%d",&a2[i][j]);
        }
        printf("\n");
    }
    printf("\narray 1 is : \n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("%d",a1[i][j]);
        }
        printf("\n");
    }

    printf("\narray 2 is : \n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("%d",a2[i][j]);
        }
        printf("\n");
    }

    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            a3[i][j] = a1[i][j]+a2[i][j];
        }
        printf("\n");
    }

    printf("Sum of two array is : \n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("%d",a3[i][j]);
        }
        printf("\n");
    }
   
}
