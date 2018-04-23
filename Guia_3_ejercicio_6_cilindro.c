/*  Created by Cohen Raphael on 20/04/2018. */


#include "Guia_3_ejercicio_6_cilindro.h"


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define PI 3.14159265358979323846


typedef struct Cilindro
{
  double radio;
  double altura;
}Cilindro;


void cilindro_diametro (struct Cilindro cil)
{
  double results;
  results= 2 * cil.radio;
  printf("El diametro del cilindro es de : %f \n", results);
};


void cilindro_circunferencia (struct Cilindro cil)
{
  double results;
  results= 2* cil.radio * PI;
   printf("La circunferencia del cilindro es de : %f \n", results);

};


void cilindro_base (struct Cilindro cil)
{
  double results;
  results= cil.radio* cil.radio * PI;
   printf("La base del cilindro es de : %f \n", results);

};

void cilindro_volumen (struct Cilindro cil)
{
  double results;
  results= cil.altura* (cil.radio* cil.radio) * PI;
  printf("El volumen del cilindro es de : %f \n", results);
};


int main ()
{
  int conocer;
  struct Cilindro cil;
  printf("Ingrese el Radio del cilindro\n");
  scanf("%lf",&cil.radio);
  printf(" Ingrese la altura del cilindro\n");
  scanf("%lf",&cil.altura);
  printf("Vos quiere conocer :\n");
  printf("  0. El diametro\n");
  printf("  1. La circunferencia\n");
  printf("  2. La base\n");
  printf("  3. El volumen\n");

  scanf("%i", &conocer);

  switch(conocer)
  {
  case 0:
    cilindro_diametro(cil);
    break;
  case 1:
    cilindro_circunferencia(cil);
    break;
  case 2:
    cilindro_base(cil);
    break;
  case 3:
    cilindro_volumen(cil);
    break;
  default:
    printf("Error");
    break;
    }

return EXIT_SUCCESS;

}
