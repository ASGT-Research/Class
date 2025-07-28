#include<stdio.h>
int main(){
   char ch;
   printf("enter a character:");
   scanf("%c",&ch);
   if(ch >= 65 && ch <= 90)
      printf("Cappital Letter");
   else if(ch >= 97 && ch <= 122)
      printf("Small letter");
   else if(ch >= 48 && ch <= 57)
      printf("Digit");
   else
      printf("Symbol");
   return 0;
}
