#include <stdio.h>

int main()
   { 
    int num, Orgnum, Rem, arm = 0;
    printf("Enter any int number: ");
    scanf("%d", &num);
    Orgnum = num;
       while (num > 0) {
        Rem = num % 10;
        arm = (Rem*Rem*Rem)+arm;
        num= num/10; }

        if(Orgnum == arm)
           printf("Armstrong Number");
            else
             printf("This no in not Armstrong Number");

   return 0;}


