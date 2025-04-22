#include <stdio.h>
#define MAX 20
#include<stdlib.h>
#include<string.h>
int stack[MAX];
int top = -1;

void push(int data){

  int x = data ;
  if (top == MAX-1)
  {
    printf("\n Stack is OverFlow");
  }else{
    top += 1;
    stack[top] = x;
  }

}

void pop(){

  int x;
  if (top == -1) 
  {
    printf("\n stack is UnderFlow");
  }else {printf("\n Element is Popped : %d",stack[top]);
    x= stack[top];
    top-= 1;
  }
}

void show(){
  if (top == -1) 
  {
    printf("\n UnderFlow");
  }else {printf("\n Element Present in the stack : \n");
    for (int i=top;i>-1;--i) {
      printf("%d \n",stack[i]);
    }
  }
}
int main(){
  int data;
  int n;
  printf("\n Enter the size of array");
  scanf("%d",&n);
  for (int i=0;i<n;i++) {
     scanf("%d",&data );
     push(data);
  }
  show();
  for (int i=0;i<n;i++){
    pop();
  }
  show();
  return 0;}
