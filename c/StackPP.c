#include <stdio.h>
int MAX_SIZE = 6;
int main()
{
  int Stack[MAX_SIZE];
  int top;
  int x;
  
  if(top == MAX_SIZE-1){
    printf( "overflow");
  } else { top = top+1;
           scanf("%d",&x);
           Stack[top]=x;
  }
  for(int i=0;i<=MAX_SIZE-1;i++)
  {
    printf("%d",Stack[i]);
  }
  
return 0;}
