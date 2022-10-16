#include <stdio.h>

// 1
// 22
// 333
// 4444
// 55555

int main()
{
    int i, j;
    
   for (i = 1; i <= 5; i++)
   {
     for (j = 0; j < i; j++)
     {
       printf("%d", i);
     }
     printf("\n");
   }
    
  return (0);
}
