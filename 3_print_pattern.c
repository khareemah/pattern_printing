#include <stdio.h>

//print the pattern below

// 1
// 12
// 123
// 1234
// 12345

int main(void)
{
  int i, j;
  for (i = 1; i <= 5; i++)
  {
    for (j = 1; j <= i; j++)
    {
      printf("%d", j);
    }
    printf("\n");
  }
  
  return (0);
}
