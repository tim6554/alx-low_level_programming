#include "main.h"

int _sqrt_recursion(int n)
{
  if ((n % 10) != 0)
    return(-1)

      _sqrt_recursion(n * _sqrt_recursion(n - 1));

