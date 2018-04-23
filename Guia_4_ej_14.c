#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>



void busqueda_binaria(int v[], int size, int objectivo){
  int max, min, med;
  max=size-1;
  min=0;
  med=(max+min)/2;
  if (v[max]==objectivo){
    med=max;
  }else if( v[min]==objectivo ){
    med=min;
  }else{
    while(v[med]!=objectivo){
      med=(max+min)/2;
      if (med<objectivo){
        min=med;
      }else{
        max=med;
      }
    }
  }

  printf("La valor buscando esta a la posicion %i \n",med+1);
}

int main(void){
  int size;
  int valor;
  int objectivo;
  printf("Cuanto valores quiere ingresar? \n");
  scanf("%i",&size);
    int v[size];
  for (int i = 0; i < size; ++i)
  {
    printf("Ingrese un valor \n");
    scanf("%i",&valor);
    v[i]=valor;
  }
  printf("Cual numero quiere buscar? \n");
  scanf("%i",&objectivo);

  busqueda_binaria(v,size,objectivo);
  return EXIT_SUCCESS;
}
