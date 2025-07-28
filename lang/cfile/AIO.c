#include<stdio.h>
void main(){
    int m[3][3],n[3][3],resA[3][3],resS[3][3],resM[3][3];
    int i,j,k;
   
  //for input
 printf("enter 3x3 matrix 1st");
    for(i=0;i<3;i++)
       { for(j=0;j<3;j++)
            scanf("%d",&m[i][j]);} 
   printf("enter 3x3 matrix 2nd");
      for(i=0;i<3;i++)
       { for(j=0;j<3;j++)
            scanf("%d",&n[i][j]);}
   //for output
       for(i=0;i<3;i++)
       { for(j=0;j<3;j++)
           { printf("%d",m[i][j]);
                    }
             printf("\n");}

       for(i=0;i<3;i++)
       { for(j=0;j<3;j++)
           { printf("%d",n[i][j]);
                  }
               printf("\n");}
     //for  add
      for(i=0;i<3;i++)
       { for(j=0;j<3;j++)
         {resA[i][j]=m[i][j]+n[i][j];
          printf("\n");}
                    }
      for(i=0;i<3;i++)
       { for(j=0;j<3;j++)
           { printf("%d",resA[i][j]);
                    }
             printf("\n");}

     //for  sub
      for(i=0;i<3;i++)
       { for(j=0;j<3;j++)
         {resS[i][j]=m[i][j]-n[i][j];
          printf("\n");}
                     }
      for(i=0;i<3;i++)
       { for(j=0;j<3;j++)
           { printf("%d",resS[i][j]);
                    }
             printf("\n");}
       //for  mul
      for(i=0;i<3;i++)
       { for(j=0;j<3;j++)
         {resM[i][j]=0;
             {for(k=0;k<3;k++)
           { resM[i][j]+=m[i][j]+n[i][k];
          printf("\n");}
                     } 
                     }
 }
      for(i=0;i<3;i++)
       { for(j=0;j<3;j++)
           { printf("%d",resM[i][j]);
                    }
             printf("\n");} 
}
