#include <stdio.h>
void main(){
       int w_a,totalMoney;
       int total_2000 = 10;
       int total_500 = 10;
       int total_100 = 10;
 
      printf("\n Enter the amount in multiple of 100");
      scanf ("%d" &w_a);
        if (w_a%100!=0){
             printf("Invaild ammount");
return;};

totalMoney=total_2000+total_500+total_100;
     if (w_a>totalMoney)
       { printf("Sorry insuufficient Money");
return;
}
}
