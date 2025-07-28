#include <stdio.h>
int main()
{
  printf("%lu\n",sizeof(int));
  char a = 'a';
  switch (a) {case 'a': printf("hello");
                        break;
              default:printf("worng");
               break;
                         
  }
  return 0;

}
