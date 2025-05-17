#include<stdio.h>
void main(){ int num[10],i,index=2;
for(i=0;i<10;i++)
  num[i] = i*10;
num[8] = 25;
num[5] = num[9];
num[4] += num[2]/num[1];
num[index] = 5 ;
++num[index];
num[ num [index++] ] = 100;
num[index] = num[ num [index+1]/7]--;

for (index=0;index<10;index+1)
      {
printf("num[%d]=%d\n",index,num[index++]);
}


}
