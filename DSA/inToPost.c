#include<stdio.h>
//#include<conio.h>
#include<string.h>
//Defining the maximum size of the stack
#define MAXSIZE 100
//Declaring the stack array and top variables in a structure
struct stack
{
char stack[MAXSIZE];
int Top;
};
//type definition allows the user to define an identifier that would
//represent an existing data type. The user-defined data type identifier
//can later be used to declare variables.
typedef struct stack NODE;
STACK 49
//This function will add/insert an element to Top of the stack
void push(NODE *pu,char item)
{
//if the top pointer already reached the maximum allowed size then
//we can say that the stack is full or overflow
if (pu->Top == MAXSIZE-1)
{
printf("\nThe Stack Is Full"  );
getch();
}
//Otherwise an element can be added or inserted by
//incrementing the stack pointer Top as follows
else
pu->stack[++pu->Top]=item;
}
//This function will delete an element from the Top of the stack
char pop(NODE *po)
{
char item=‘#’;
//If the Top pointer points to NULL, then the stack is empty
//That is NO element is there to delete or pop
if(po->Top == –1)
printf(“\nThe Stack Is Empty. Invalid Infix expression”);
//Otherwise the top most element in the stack is poped or
//deleted by decrementing the Top pointer
else
item=po->stack[po->Top--];
return(item);
}
//This function returns the precedence of the operator
int prec(char symbol)
{
switch(symbol)
{
case '(':
return(1);
case ')':
return(2);
case '+':
case '-':
return(3);
case '*':
case '/':
case '%':
return(4);
case '^':
return(5);
default:
return(0);
}
}
//This function will return the postfix expression of an infix
void Infix_Postfix(char infix[])
{
int len,priority;
char postfix[MAXSIZE],ch;
//Declaring an pointer variable to the structure
NODE *ps;
//Initializing the Top pointer to NULL
ps->Top=–1;
//Finding length of the string
len=strlen(infix);
//At the end of the string inputting a parenthesis ')'
infix[len++]=')';
push(ps,'(');//Parenthesis is pushed to the stack
for(int i=0,j=0;i<len;i++)
{
switch(prec(infix[i]))
{
 //Scanned char is '(' push to the stack
case 1:
push(ps,infix[i]);
break;
//Scanned char is ')' pop the operator(s) and add to //the postfix
expression
case 2:
ch=pop(ps);
while(ch != '(')
{postfix[j++]=ch;
ch=pop(ps);
}
break;
//Scanned operator is +,– then pop the higher or same
//precedence operator to add postfix before pushing
//the scanned operator to the stack
case 3:
ch=pop(ps);
while(prec(ch) >= 3)
{
postfix[j++]=ch;
ch=pop(ps);
}
push(ps,ch);
push(ps,infix[i]);
break;
//Scanned operator is *,/,% then pop the higher or
//same precedence operator to add postfix before
//pushing the scanned operator to the stack
case 4:
ch=pop(ps);
while(prec(ch) >= 4)
{
postfix[j++]=ch;
ch=pop(ps);
}
push(ps,ch);
push(ps,infix[i]);
break;
//Scanned operator is ^ then pop the same
//precedence operator to add to postfix before pushing
//the scanned operator to the stack
case 5:
ch=pop(ps);
while(prec(ch) == 5)
{
postfix[j++]=ch;
ch=pop(ps);
}
push(ps,ch);
push(ps,infix[i]);
break;//Scanned char is a operand simply add to the postfix
//expression
default:
postfix[j++]=infix[i];
break;
 }
}
//Printing the postfix notation to the screen
printf (“\nThe Postfix expression is = ”);
for(i=0;i<j;i++)
printf (“%c”,postfix[i]);
}
void main()
{
char choice,infix[MAXSIZE];
do
{
clrscr();
printf(“\n\nEnter the infix expression = ”);
fflush(stdin);
gets(infix);//Inputting the infix notation
Infix_Postfix(infix);//Calling the infix to postfix function
printf(“\n\nDo you want to continue (Y/y) =”);
fflush(stdin);
scanf(“%c”,&choice);
}while(choice == 'Y' || choice == ‘y’);
}
