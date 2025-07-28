#include <stdio.h>
void main()
{ int a,b,sum,carry;
  printf("Enter two number you want to add \n");
  scanf("%d %d",&a,&b);
  while (b !=0) { sum =a^b; 
                  carry = (a&b)<<1;
                  a = sum;
                  b= carry;
                }
  printf("sum or a+b is %d\n",a);
  // if (y > 0) {
  // while (b !=0) 
  //    { x++;
  //     y--;} }if () 
  //  else if (y < 0) {
  //  while (b !=0)
  //    { x--;
  //     y++;} }
  //   else 
  //
  
  // 
}
