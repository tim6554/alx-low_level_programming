#include<stdio.h>

/*
 *
 *
 *
 *
 **/

int main(void)

{
  int a[5];
  int *p;
  int *p2;


  *a = 98;
  *(a + 1) = 198;
  *(a + 2) = 298;
   a[3] = 398;
  *(a + 4) = 498;
   p = a + 1;  
   p2 = a + 3;
  *p2 = *p + 1337;


  printf ("Value  of a[0]is : %d\n", *a);
  printf ("Value of a[1] (same as (a+1)) is : %d\n", *(a + 1));
   return (0);





}