#include <stdio.h>
 
// print the pattern below
// *
// **
// ***
// ****
// *****


int main(void)
{
    int i, j;
    
    for (i = 1; i <= 5; i++)
    {
      for (j = 0; j < i; j++)
      {
        printf("*");
      }
      printf("\n");
    }
    return (0);
}
