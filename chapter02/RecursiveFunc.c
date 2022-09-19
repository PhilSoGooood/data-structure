#include <stdio.h>

void Recursice(int num)
{
  if (num <= 0)
    return;
  printf("Recursive call! %d \n", num);
  Recursice(num - 1);
}

int main(void)
{
  Recursice(3);
  return 0;
}