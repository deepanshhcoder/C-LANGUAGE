#include <stdio.h>
int main() {
   int n,i,j,k = 1;
   for(i = 1; i <=4; i++) {
      for(j = 1;j <=i; j++)
         printf("%d ",k++);
      printf("\n");
   }
}