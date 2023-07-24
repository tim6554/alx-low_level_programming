#include<stdio.h>
/*
 *modify_my_param
 *
 *return nothing
 *
 **/

void modify_my_param(char *cc, char ccc)

{
  *cc = 'o';
  ccc = 'l';
}

/*
 *print values 
 *
 *return: 0
 *
 */

int main(void)
{
  char c;
  char *p;

  p = &c;
  c = 'H';

  modify_my_param(p, c);
  

  printf ("Value of c is : %c\n", c);
  printf ("Address of c is :%p\n", &c);
  printf ("Value of p is : %p\n", p);
  printf ("Address of p is : %p\n", &p);
  modify_my_param(p, c);
  printf ("Value of p after mod is : %s\n", p);
  printf ("Value of c after mod is : %d\n", c);
  return (0);

}
