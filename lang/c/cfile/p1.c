
#include<stdio.h>
int  main(){
            int a,b;
            printf("enter first No.");
            scanf("%d",&a);
            printf("enter Second No.");
            scanf("%d",&b);
            a = a^b;
            b = a^b;
            a= a^b;
           printf("%d",a);
           printf("\n");
           printf("%d",b);
 return 0;}
