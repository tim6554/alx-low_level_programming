#include<stdio.h>

/**
 *
 *main entry point
 *
 *return (0) on success
 */

int main(void)

{
  char a;
    int b;
    long int c;
    long long int d;
    float e;

    printf("size of a char: %lu byte(s)\n",sizeof(a));
    printf("size of a int: %lu byte(s)\n",sizeof(b));
    printf("size of a long int %lu byte(s)\n",sizeof(c));
    printf("size of a long long int %lu byte(s)\n",sizeof(d));
    printf("size of a float %lu byte(s)\n",sizeof(e));
    return(0);
}
