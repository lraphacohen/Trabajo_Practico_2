#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
  int matriz[3][4] = {{ 1, 2, 3, 4}, { 5, 6, 7, 8}, { 9,10,11,12}};
  int **ptr=matriz;
 // int (*ptr2vector)[4];
  int fila, col;
  fila=3;
  col=4;

for (int i = 0; i < fila; ++i)
{
  for (int j = 0; j < col; ++j)
  {
    printf("%d ", *(*(matriz+i)+j) );
  }
  printf("\n");
}

return EXIT_SUCCESS;
}
