#include <stdio.h>
#include <stdlib.h>
 
struct Node {
  int info;
  struct Node *add;
};

void countOfNode(struct Node *start)
{ int count = 0;
  struct Node  *ptr = start;
   //printf("%d\n",ptr->add);
  if (start == NULL)
  {
    printf("\n List is allready empty ");
  }
  while (ptr != NULL) 
  {
    count++;
    ptr = ptr->add;
  }
  printf("%d\n",count);
}

void DisplayAllElementInLL(struct Node *start)
{ struct Node *ptr = start;
  //printf("%d\n",ptr);
  //printf("%d\n",*ptr);
  if (ptr == NULL) 
  {
    printf("\n List is allready empty\n");
    
  }
  while(ptr != NULL)
  {
    printf("%d->",ptr->info);
      ptr = ptr->add;
  }

}


struct Node* Insert_Biginning(struct Node **start,int data){
  struct Node *ptr =(struct Node *) malloc (sizeof(struct Node));
  ptr->info = data ;
  ptr->add = NULL;

  ptr->add = *start;
  *start = ptr;
 return start;}


void Insert_In_Betwern(struct Node *start,int data ,int pos)
{
  struct Node *ptr = start;
  
  struct Node *ptr2 =(struct Node *) malloc(sizeof(struct Node));
  ptr2->info = data ;
  ptr2->add = NULL;
  
  pos--;
  while (pos != 1) 
  {
    ptr = ptr->add;
    pos--;
  }
  ptr2->add = ptr->add;
  ptr->add = ptr2;
  
}

void Insert_End(struct Node *start ,int data)
{struct Node *ptr,*temp ;
 ptr = start;
 temp = (struct Node *)malloc(sizeof(struct Node ));
  temp->info = data;
  temp->add = NULL;

  while(ptr->add != NULL)
  {
    ptr = ptr->add;
  }
   ptr->add =temp;
}

struct Node* Delete_Front(struct Node *start){
  if (start == NULL) 
  {
    printf("\n List is allready empty\n");
  }
  else 
  {
    struct Node *temp = start ;
    start = start->add;
    free(temp);
    temp=NULL;
  }
 return start;
}

void Delete_End(struct Node *start)
{
  if (start == NULL) 
  {
    printf("\n List is allready empty\n");
  }
  else if (start->add ==NULL) 
  {
    free(start);
    start = NULL;
  }
  else 
  {
    struct Node *temp = start ;
    while (temp->add->add != NULL) 
    {
      temp = temp->add;
    }
    free(temp->add);
    temp->add = NULL;

  }
}
void Delete_position( struct Node **start, int position){
  struct Node *prev = *start;
  struct Node *curr = *start;
  if (start == NULL) 
  {
    printf("\n List is allready empty\n");
  }
  else if (position == 1)
  {
    *start = curr->add;
    free(curr);
    curr = NULL;
  }
  else 
  {
    while (position != 1) 
    {
      prev = curr;
      curr = curr->add;
      position--;
    }
    prev->add = curr->add;
    free(curr);
    curr = NULL;
  }
}


void Delete_List(struct Node **start)
{ struct Node *temp = *start;
  while (temp != NULL) 
  { 
    temp = temp->add;
    free(*start);
    *start = temp;
  }
  
}

struct Node * Reverse_List(struct Node *start)
{
  struct Node *prev = NULL;
  struct Node *next = NULL;

  while (start != NULL) 
  {
    next = start->add;
    start->add = prev;
    prev = start ;
    start = next;
  }
  start = prev;
  return start;
}




int main()
{ int choise;
  struct Node *start;
  start = (struct Node *) malloc (sizeof(struct Node));//we donot need to typecasing in malloc function because start pointer also have struct node tpye but it's good partices
  start->info = 123;
  start->add = NULL;

  //Insert_Biginning(&start,124);
  //Insert_Biginning(&start,127);
 // Insert_In_Betwern(start,128 ,2);
  //start = Delete_Front(start);
  //Delete_position( &start,2);
  //Delete_End(start);
 // Delete_List(&start);
  //start = Reverse_List(start);
 // countOfNode(start);
 // DisplayAllElementInLL(start);
   while (1) 
  { printf("\n Enter which operation you want to perform \n");
    printf("\n 1.Display \n 2.Count Node \n 3.Insert New Node \n 4.Reverse Whole List \n 5.Delete Node \n 6.Quite \n");
    scanf("%d",&choise);
    switch (choise) {
      case 1:
        printf("\n you want chose Display whole List is :");
        DisplayAllElementInLL(start);
        printf("\n");
       break;
      case 2:
        printf(" You want to count node so your result is  :");
        countOfNode(start);
      break;
      
      case 3:while (1) 
             {int choise; 
              printf("\n chose where you want to add node \n 1.Insert into Biginning \n 2.Insert into selected position \n 3.Insert into Ending \n press any other exit Insert function ");
              scanf("%d",&choise);
               if (choise >= 1 && choise<= 3) {
               
               switch(choise) 
               {
                  case 1:
                   {int data;
                    printf("\n Enter data you want to add");
                    scanf("%d",&data);
                    Insert_Biginning(&start,data);
                    DisplayAllElementInLL(start);}
                    break;
                  case 2:
                    {int data,position ;
                    DisplayAllElementInLL(start);
                    printf("\n Enter data you want to add and chose whole list which position add you data ");
                    scanf("%d %d",&data, &position);
                    Insert_In_Betwern(start,data ,position);
                    DisplayAllElementInLL(start);}
                    break;
                  case 3:
                    {int data; 
                    printf("\n Enter your data you want to add end of the list ");
                    scanf("%d",&data);
                    Insert_End( start,data);
                    DisplayAllElementInLL(start);}
                    break;
                  
                  default:
                    printf("\n Missing Somthing ");
                    exit(0);
               }}else 
                break;
             }
                 
         break;
      case 4:
            printf("\n you want to Reverse present list your present list is :");
            DisplayAllElementInLL(start);
            printf("\n Reverse list is :");
            start = Reverse_List(start);
            DisplayAllElementInLL(start);
        break;

      case 5:
           while (1) 
           {
             int choise;
              printf("\n Enter where you want to delete list");
              printf("\n 1.Delete into starting \n 2.Delete into position \n 3.Delete into Ending \n 4.Delete whole list \n Enter your choise ");
              scanf("%d",&choise);//printf("%d\n",choise);
              if (choise >=1 && choise <= 4) 
              {
                switch (choise)
                {
                 case 1:
                  {printf("\n you delete first elemeny in current list is :");
                  DisplayAllElementInLL(start);
                  printf("\n your update list is :");
                  start = Delete_Front(start);
                  DisplayAllElementInLL(start);}
                  break;
                 case 2:
                  {int position;
                  DisplayAllElementInLL(start);
                  printf("\n select which positiom element you want to delete ");
                  scanf("%d",&position);
                  Delete_position( &start,  position);
                  printf("\n your update list list is :");
                  DisplayAllElementInLL(start);}
                  break;
                 case 3:
                 { printf("\n you want to delete last element in current list is :");
                  DisplayAllElementInLL(start);
                  Delete_End(start);
                  printf("\n your update list list is :");
                  DisplayAllElementInLL(start);}
                  break;
                 case 4:
                 {printf("\n you want to delete whole list in present in current ");
                  Delete_List(&start);
                  DisplayAllElementInLL(start);}
                  break;
                  default:exit(1); 
                }
              }else break;
           }break; 
         
  

    }

    
  }
 

  return EXIT_SUCCESS;
}
