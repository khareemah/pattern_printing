#include <stdio.h>
int main()
{
    
    int i, j, k;
    int row = 7;
    int col = ((row - 1) + row);
    
    k = (col - 1) / 2;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
          if ((j < k) || (j >= col - k))
              printf(" ");
          else
             printf("*");
          if (j < col - 1)
             printf(" ");
        }
        k--;
        printf ("\n");
    }
    
    return (0);
}
