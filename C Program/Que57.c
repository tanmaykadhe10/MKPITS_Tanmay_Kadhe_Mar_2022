#include <stdio.h>
  int main() {
    int i, j, a, ip = 0;
    printf("The prime numbers between 1 and 199 are:\n");
    
	for (i = 2; i < 199; i++) 
    {
      a = 1;
      for (j = 2; j <= i / 2 && a== 1; j++) 
      {
        if (i % j == 0) {
          a = 0;
        }
      }
      if (a == 1) 
      {
        printf("%5d ", i);
        ip++;
        if (ip % 10 == 0) 
        {
          printf("\n");
        }
      }
    }
    printf("\n");
    return 0;
  }

