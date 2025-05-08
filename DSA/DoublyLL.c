#include <stdio.h>
#include <stdlib.h>

struct Node {
  struct Node *badd;
  int info;
  struct Node *fadd;
};

struct Node Display(struct Node *start)
{
  struct Node *ptr = start;
  while (ptr!=NULL) 
  {
    printf("%d->",ptr->info);
    ptr= ptr->fadd;   
  }

}

struct Node AddToEmpty(struct Node **start,int data)
{
  struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
  temp->badd=NULL;
  temp->info = data;
  temp->fadd=NULL;
  *start = temp;
   
}

struct Node AddToBeg(struct Node **start,int data )
{
  struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
  temp->badd=NULL;
  temp->info = data;
  temp->fadd=NULL;
  temp->fadd= *start;
  *start = temp;
}


struct Node AddToEnd(struct Node **start,int data )
{
  struct Node *temp ,*tp;
  temp = (struct Node *)malloc(sizeof(struct Node));
  temp->badd=NULL;
  temp->info = data;
  temp->fadd=NULL;
  tp = *start;
  while (tp->fadd != NULL) 
  {
    tp = tp->fadd;
  }
  tp->fadd = temp;
  temp->badd= tp;
}

struct Node AddToPos(struct Node **start,int data,int position )
{
 struct Node newP = NULL;
 struct Node temp = *start;
 struct Node temp2 = NULL;
  newp = AddToEmpty(newP,data);
  while (position != 1)
  {
    temp =temp->fadd;
    position--;
  }
  if (temp->fadd = NULL) 
  {
    temp->fadd = newP;
    newP->badd = temp;
  }else
  {
   temp2 = temp->fadd;
   temp->fadd = newP;
   temp2->badd =newP;
   newP->fadd = temp2;
   newP->badd = temp;
  }

}







int main()
{
  struct Node *start = NULL;
  AddToEmpty(&start,10);
  AddToBeg(&start,20);
  AddToEnd(&start,30);
  Display(start);
}
