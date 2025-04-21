#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10

int LinearSearch(int number[],int key){

  for(int i=0;i<=MAX-1;i++)
  {
    if (number[i] == key) 
      return i;
  }
  return -1;
}

int LargestNumber(int number[]){
  int largest = 0;
  for (int i=0;i<= MAX;i++) {
    if (largest < number[i]) {
      largest = number[i];
    }
  }
  return largest;}

int BinarySearch(int number[],int key){
  int start=0;
  int end = MAX-1;
  while(start <= end){
    int mid = (start+end)/2;
    if (number[mid] == key) {
      return mid;
    }
    if (number[mid] < key) {
      start = mid+1;
    }else {end =mid-1;
    }
  }
  return -1;
}

int ReverseOrder(int number[]){
  for (int i=0;i<=MAX-1;i++) {
    printf("%d",number[i]);
  }
  printf("\n");
  for (int j=MAX-1;j>=0;j--) {
    printf("%d" ,number[j]); }
}
int main()
{   int number[MAX];
    int key ;
   printf("\n Enter array element,Element should be integer");
  for (int i=0;i<MAX;i++) {
    scanf("%d",&number[i]);
   }
  printf("\n Enter Key Value you want to findin array");
  scanf("%d",&key);
 while(1){
    int choise;

  printf("\n Enter your choise.\n 1 LinearSearch method \n 2 LargestNumber \n 3 BinarySearch\n 4 ReverseOrder for array\n press any key for exit");
  scanf("%d",&choise);
 

  switch (choise) {
    case 1:int index = LinearSearch(number,key);
    if (index == -1) {printf("\n Key Not found ");}
    else {printf("\n key is index :%d",index);}
    break;
    case 2:
      printf("\n largest Number is : %d\n",LargestNumber(number));
    break;
    case 3:
    printf(" BinarySearch techniqe find index is : %d\n",BinarySearch( number, key));
    break;
    case 4:
      ReverseOrder(number);
      break;

  
    default:
      printf("%\n Invaild Choise");
      exit(0);
    }
  }
  return 0;}
