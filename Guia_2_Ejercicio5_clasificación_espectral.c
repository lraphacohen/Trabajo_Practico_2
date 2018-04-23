/*  Created by Cohen Raphael on 20/04/2018. */


#include "Guia2_Ejercicio5_clasificación_espectral.h"


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

enum espectral_t
{
  M,K,G,F,A,B,O

};


int main(void){
  enum espectral_t esp_t;
  int temp;
  temp=0;

  printf("Ingrese una temperatura entre 1700 y 50000\n");
  scanf("%i", &temp);
  while (temp<1700 || temp>50000)
  {
    printf("Ingrese una temperatura entre 1700 y 50000\n");
    scanf("%i",&temp);
  }

  if (temp>=1700 && temp<=3200){
    esp_t=M;
  }else if (temp>3200 && temp<=4600){
    esp_t=K;
  }else if (temp>4600 && temp<=5700){
    esp_t=G;
  }else if (temp>5700 && temp<=7100){
    esp_t=F;
  }else if (temp>7100 && temp<=9600){
    esp_t=A;
  }else if (temp>9600 && temp<=28000){
    esp_t=B;
  }else if (temp>28000 && temp<=50000){
    esp_t=O;
  }else{
    puts("Hay un problema");
  }



  switch (esp_t)
  {
    case 0:
      puts(" Color : Rojo ");
      break;
    case 1:
      puts(" Color : Naranja ");
      break;
    case 2:
      puts(" Color : Amarillo ");
      break;
    case 3:
      puts(" Color : Blanco amarillento ");
      break;
    case 4:
      puts(" Color : Blanco ");
      break;
    case 5:
      puts(" Color : Blanco azulado ");
      break;
    case 6:
      puts(" Color : Azul ");
      break;
    default:
    puts("Error, disculpa");
    break;
  }


return EXIT_SUCCESS;


}





