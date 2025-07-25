#include <stdio.h>
#include <limits.h>
void main(){
  int min = INT_MIN;
  int max = INT_MAX;
  printf("SMin = %d Smax = %d \n",min ,max);
  unsigned int min1 = 0;
  unsigned int max1 = UINT_MAX;
  printf("UMin = %u Umax = %u \n",min1 ,max1);
  short int min2 = SHRT_MIN;
  short int max2 = SHRT_MAX;
  printf("SIMin = %d SImax = %d \n",min2 ,max2);
  unsigned short int min3 = 0;
  unsigned short int max3 = USHRT_MAX;
  printf("USIMin = %u USImax = %u \n",min3 ,max3);

  ++max1;
  printf("%u\n", max1);
 printf("-------float----");
  printf("float : %d\n",sizeof(float));
  printf("double :%d\n",sizeof(double));
  printf("long double : %d\n",sizeof(long double));
}
