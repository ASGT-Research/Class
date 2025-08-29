#include <stdio.h>
union Shivam {
  int a;
  char b;
};
void main(){
   union Shivam s1;
   s1.a = 65;
    printf("%d\n",s1.a);
    printf("%c\n",s1.b);
}
