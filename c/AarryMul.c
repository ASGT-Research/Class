#include<stdio.h>
void main ()
{ int m1[3][3],m2[3][3],m3[3][3],i,j,k;
     printf("enter your first 3x3 matrix element");
     for (i=0;i<3;i++)
      {for (j=0;j<3;j++)
         {
          scanf("%d",&m1[i][j]);
           }
             }
     printf("enter your Second 3x3 matrix element");
         for (i=0;i<3;i++)
           {for (j=0;j<3;j++)
              {
                 scanf("%d",&m2[i][j]);
                           }
                              }
             for (i=0;i<3;i++)
                 {for (j=0;j<3;j++)
          m3[i][j]=0;
                      {for(k=0;k<3;k++)
            m3[i][j]= m3[i][j]+m1[i][k]*m2[k][j];
                    }
                       }
            for (i=0;i<3;i++)
              {for (j=0;j<3;j++)
                {printf("%d ",m3[i][j]);

                     }
                       printf("\n");    }
}
