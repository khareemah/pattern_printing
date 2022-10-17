#include <stdio.h>

// print the pattern below

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14
// 15 17 18 19 20

int main()
{
    int i,j, num;
    
    num = 1;
    for(i = 1; i <= 5; i++)
    {
      for (j = 0; j < i; j++)
      {
        printf("%d ", num);
        num++;
      }
      printf("\n");
    }
    return (0);
}
