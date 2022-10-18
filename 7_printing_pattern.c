#include <stdio.h>

// print the pattern below

//     *
//    * *
//   * * *
//  * * * *
// * * * * *

int main(void)
{
    int i,space, j;
    
    for(i = 1; i <= 5; i++)
    {
      for (space = 0; space < 5 - i; space++)
      {
        printf(" ");
      }
      for (j = 0; j < i; j++)
      {
        printf("* ");
      }
      printf("\n");
    }
    return (0);
}
