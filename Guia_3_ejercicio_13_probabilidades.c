/*  Created by Cohen Raphael on 20/04/2018. */




#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

enum Moneda{
  Cara, Ceca
};

/* A */

void proba1(void){
  int valor;
  printf("Ingrese un valor");
  scanf("%i",&valor);
  switch (valor){
    case (0):
      printf("P(X=%d)=0.2\n",valor);
      break;
    case (1):
      printf("P(X=%d)=0.8\n",valor);
      break;
    default:
      printf("P(X=%d)=0\n",valor);
      break;
  }
}


/* B */


void proba2(void){
  int valor;
  printf("Ingrese una valor");
  scanf("%i",&valor);
  if (valor==3){
    printf("P(X=%d)=0.1\n",valor);
  }else if(valor==5){
    printf("P(X=%d)=0.55\n",valor);
  }else if(valor==9){
    printf("P(X=%d)=0.35\n",valor);
}else{printf("El valor que vos quire no existe");}

}

/* C */


void proba3(void){
  int test;
  enum Moneda plata;
  printf("Ingrese 1 si quiere la cara y 2 si quiere la ceca" );
  scanf("%i",&test);
  while(test<1 || test>2)
  {
    printf("Ingrese 1 si quiere la cara y 2 si quiere la ceca" );
    scanf("%i",&test);
  }

  if (test==1){
    plata=Cara;
     printf("%c",plata);
  }else if (test==2){
    plata=Ceca;
     printf("%c",plata);
  }else{
    printf("Error, disculpa");
  }

}

/* D */


void proba4(void){
scanf(" |     |   |    *|   |*    |   |*   *|   |*   *|   |*   *|  ");
scanf(" |  *  |   |     |   |  *  |   |     |   |  *  |   |*   *|  ");
scanf(" |     |   |*    |   |    *|   |*   *|   |*   *|   |*   *|  ");
}


int main(void)
{
  int val;
  printf("Ingrese el numero: \n");
  printf("1 por el ejercicio A \n");
  printf("2 por el ejercicio B \n");
  printf("3 por el ejercicio C \n");
  printf("4 por el ejercicio D \n");
  scanf("%i",&val);


  if (val==1){ proba1();
  }else if (val==2){ proba2();
  }else if (val==3){ proba3();
  }else if (val==4){ proba4();
  }else{
    printf("Error, no ingrese una de las 4 posibilidades");
  }

return EXIT_SUCCESS;
}



