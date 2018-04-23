#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Horas
{
  int horas;
  int minutos;
  int segundas;
}Horas;



int main(){
int valConvert;
printf("ingrese el  numero que quiere convertar\n");
scanf("%i",&valConvert);

struct Horas hor;
hor.horas=(valConvert)/3600;
valConvert=valConvert-(hor.horas*3600);
hor.minutos=(valConvert)/60;
  valConvert=valConvert-(hor.minutos*60);
hor.segundas=valConvert;

printf("Horas : %i\n",hor.horas);
printf("Minutos : %i\n",hor.minutos);
printf("Segundas : %i\n",hor.segundas);

return EXIT_SUCCESS;
}



