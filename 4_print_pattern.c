#include <stdio.h>

//print the pattern below

//     *
//    **
//   ***
//  ****
// *****

int main(void)
{
  int i, j;
  for (i = 1; i <= 5; i++)
  {
    for (j = 5; j >= 1; j--)
    {
      if (j > i)
        printf(" ");
      else
      printf("*");
    }
    printf("\n");
  }
  
  return (0);
}
