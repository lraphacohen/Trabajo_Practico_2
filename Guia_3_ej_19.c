#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


void num_espejado(int numnormal){
int n;
int reste;
n=(log10(numnormal))+1;
printf("%i",numnormal);
for (int i = 0; i < n; i++)
{
  reste=numnormal%10;
  printf("%i",reste);
  numnormal=numnormal/10;
}

}

int main(void){
int valingrese;
valingrese=0;
printf("Ingrese un valor positivo \n");
scanf("%i",&valingrese);
//while(valingrese<0){
//  printf("Ingrese un valor positivo \n");
 // scanf("%i",valingrese);
//}
num_espejado(valingrese);
return EXIT_SUCCESS;
}
