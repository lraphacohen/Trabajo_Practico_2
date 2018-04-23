#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


void pbA(){
  int temano;
  printf("Ingrese el temano de la matriz");
  scanf("%i",&temano);
  double matriz[temano][temano];
  double aux;
  double suma;
  suma=0;
  for (int i = 0; i < temano; ++i)
  {
    for (int j = 0; j < temano; ++j)
    {
      printf("Ingrese un valor por la matriz \n");
      scanf("%lf",&aux);
      matriz[i][j]=aux;
    }
  }
  for (int i = 0; i < temano; ++i)
  {
    suma+=matriz[i][i];
  }
printf("La suma es de : %lf", suma);
}


void pbB()
{
  int linea;
  double aux;
  double numero;
  printf("Ingrese el nombre de lineas de la matriz\n");
  scanf("%i",&linea);
  int columna;
  printf("Ingrese el nombre de columnas de la matriz\n");
  scanf("%i",&columna);
  double matriz[linea][columna];
  for (int i = 0; i < linea; i++)
  {
    for (int j = 0; j<columna; j++)
    {
      printf("Ingrese un valor por la matriz\n");
      scanf("%lf",&aux);
      matriz[i][j]=aux;
    }
  }
  printf("Ingrese el valor del numero\n");
  scanf("%lf",&numero);
  for (int i = 0; i < linea; ++i)
  {
    for (int j = 0; j < columna; ++j)
    {
      matriz[i][j]=(matriz[i][j])+ numero;
    }
  }
  for (int i = 0; i < linea; ++i)
  {
    for (int j = 0; j < columna; ++j)
    {
      printf("%f ",matriz[i][j] );
    }
    printf("\n");
  }



}

void pbC()
{
  int linea;
  double aux;
  int numero;
  printf("Ingrese el nombre de lineas de la matriz\n");
  scanf("%i",&linea);
  int columna;
  printf("Ingrese el nombre de columnas de la matriz\n");
  scanf("%i",&columna);
  double matriz[linea][columna];
  for (int i = 0; i < linea; i++)
  {
    for (int j = 0; j<columna; j++)
    {
      printf("Ingrese un valor por la matriz\n");
      scanf("%lf",&aux);
      matriz[i][j]=aux;
    }
  }
  printf("Ingrese el valor del numero\n");
  scanf("%d",&numero);
  for (int i = 0; i < linea; ++i)
  {
    for (int j = 0; j < columna; ++j)
    {
      matriz[i][j]=(matriz[i][j])* numero;
    }
  }

  for (int i = 0; i < linea; ++i)
  {
    for (int j = 0; j < columna; ++j)
    {
      printf("%f ",matriz[i][j] );
    }
    printf("\n");
  }

}



void pbD(){

  int linea;
  double aux;
  printf("Ingrese el nombre de lineas de la matriz\n");
  scanf("%i",&linea);
  int columna;
  printf("Ingrese el nombre de columnas de la matriz\n");
  scanf("%i",&columna);
  double matrizA[linea][columna];

  for (int i = 0; i < linea; i++)
  {
    for (int j = 0; j<columna; j++)
    {
      printf("Ingrese un valor por la matriz\n");
      scanf("%lf",&aux);
      matrizA[i][j]=aux;
    }
  }
printf("\n Matrice A \n");

for (int j = 0; j < linea; j++)
  {
    for (int i = 0; i<columna; i++)
    {
     printf("%f ", matrizA[j][i]);
    }
  printf("\n");
  }

  printf("\n Matrice B \n");

double matrizB[columna][linea];
  for (int i = 0; i < linea; i++)
  {
    for (int j = 0; j<columna; j++)
    {
     matrizB[j][i]=matrizA[i][j];
    }
  }

  for (int j = 0; j < linea; j++)
  {
    for (int i = 0; i<columna; i++)
    {
     printf("%f ", matrizB[j][i]);
    }
  printf("\n");
  }

}


void pbE(){
  int linea;
  double aux;
  printf("Ingrese el nombre de lineas de la matriz\n");
  scanf("%i",&linea);
  int columna;
  printf("Ingrese el nombre de columnas de la matriz\n");
  scanf("%i",&columna);
  double matriz[linea][columna];
  for (int i = 0; i < linea; i++)
  {
    for (int j = 0; j<columna; j++)
    {
      printf("Ingrese un valor por la matriz\n");
      scanf("%lf",&aux);
      matriz[i][j]=aux;
    }
  }

  char matrizTypo[50];
  if (matriz[0][0]>=0){
    strcpy(&matrizTypo[0],"positivo");
  }
  if (matriz[0][0]<0){
    strcpy(&matrizTypo[0],"negativo");
    }
  for (int i = 0; i < linea; i++)
  {
    for (int j = 1; j<columna; j++)
    {
      if (matriz[i][j]==0 && strcmp(&matrizTypo[0],"positivo")==0){
            strcpy(&matrizTypo[0],"no negativo");
      }else if(matriz[i][j]>0 && strcmp(&matrizTypo[0],"positivo")==0){
          strcpy(&matrizTypo[0],"positivo");
      }else if(matriz[i][j]==0 && strcmp(&matrizTypo[0],"negativo")==0){
            strcpy(&matrizTypo[0],"no_positvo");
      }else if (matriz[i][j]<0 && strcmp(&matrizTypo[0],"negativo")==0){
          strcpy(&matrizTypo[0],"negativo");
      }else if (matriz[i][j]>0 && strcmp(&matrizTypo[0],"no negativo")==0){
            strcpy(&matrizTypo[0],"no negativo");
      }else if(matriz[i][j]<0 && strcmp(&matrizTypo[0],"no positivo")==0){
            strcpy(&matrizTypo[0],"no positvo");
      }else{
        (strcpy(&matrizTypo[0],"no cumple ninguna de las condiciones"));
      }
      }
    }

    if (strcmp(&matrizTypo[0],"positivo")==0){
      printf("La matriz esta positiva\n");
    }else if(strcmp(&matrizTypo[0],"negativo")==0){
      printf("La matriz esta negativa\n");
    }else if(strcmp(&matrizTypo[0],"no negativo")==0){
      printf("La matriz esta no negativa\n");
    }else if(strcmp(&matrizTypo[0],"no positivo")==0){
      printf("La matriz esta no positiva\n");
    }else if (strcmp(&matrizTypo[0],"no cumple ninguna de las condiciones")==0){
      printf("La matriz no cumple ninguna de las condiciones\n");
    }else{
      printf("pb");
    }

  }



  void pbF(){
  int temano;
  double determinante;
  double aux;
  printf("Ingrese el nombre temano de la matriz (2 o 3)\n");
  scanf("%i",&temano);

  double matriz[temano][temano];
  for (int i = 0; i < temano; i++)
  {
    for (int j = 0; j<temano; j++)
    {
      printf("Ingrese un valor por la matriz\n");
      scanf("%lf",&aux);
      matriz[i][j]=aux;
    }
  }

  if (temano==2){
    determinante=(matriz[0][0]*matriz[1][1])-(matriz[1][0]*matriz[0][1]);
  }else{
    determinante=matriz[0][0]*((matriz[1][1]*matriz[2][2])-(matriz[1][2]*matriz[2][1]))-matriz[1][0]*((matriz[0][1]*matriz[2][2])-(matriz[0][2]*matriz[2][1]))+matriz[2][0]*((matriz[0][1]*matriz[1][2])-(matriz[0][2]*matriz[1][1]));
  }
printf("%f\n",determinante );

  }


void pbG(){

 int matrizA[50][50];
 int matrizB[50][50];
 int matrizC[50][50];
 int lineaA, columnA, columnaB;
 int i, j, k;


 printf("   Matriz A \n");
 printf("Cantidad de lineas por la matriz A : ");
 scanf("%d", &lineaA );
 printf("Cantidad de columnas por la matriz A : ");
 scanf("%d", &columnA );
 for (i=0; i<lineaA; i++)
    for (j=0; j<columnA; j++)
        {
         printf("Valor por la matriz A[%d][%d] : ",i,j);
         scanf("%d", &matrizA[i][j]);
        }
 printf("    Matrice B     \n");
 printf("Cantidad de lineas por la matriz B : %d\n", columnA);
 printf("Cantidad de columnas por la matriz B : ");
 scanf("%d", &columnaB );
 for (i=0; i<columnA; i++)
    for (j=0; j<columnaB; j++)
        {
         printf("Valor por la matriz B[%d][%d] : ",i,j);
         scanf("%d", &matrizB[i][j]);
        }

 printf("Matriz A :\n");
 for (i=0; i<lineaA; i++)
    {
     for (j=0; j<columnA; j++)
          printf("%7d", matrizA[i][j]);
     printf("\n");
    }
 printf("Matriz B :\n");
 for (i=0; i<columnA; i++)
    {
     for (j=0; j<columnaB; j++)
          printf("%7d", matrizB[i][j]);
     printf("\n");
    }

 for (i=0; i<lineaA; i++)
     for (j=0; j<columnaB; j++)
         {
          matrizC[i][j]=0;
          for (k=0; k<columnA; k++)
               matrizC[i][j] += matrizA[i][k]*matrizB[k][j];
         }

 printf("Matriz C :\n");
 for (i=0; i<lineaA; i++)
    {
     for (j=0; j<columnaB; j++)
          printf("%7d", matrizC[i][j]);
     printf("\n");
    }

  }

void pbH(){

  int linea;
  double aux;
  printf("Ingrese el nombre de lineas de la matriz \n");
  scanf("%i",&linea);
  int columna;
  printf("Ingrese el nombre de columnas de la matriz \n");
  scanf("%i",&columna);
  int matriz[linea][columna];
  for (int i = 0; i < linea; i++)
  {
    for (int j = 0; j<columna; j++)
    {
      printf("Ingrese un valor por la matriz \n");
      scanf("%lf",&aux);
      matriz[i][j]=aux;
    }
  }

  double max;
  max=0;

  for (int i = 0; i < linea; i++)
  {
    for (int j = 0; j<columna; j++)
    {
     if (matriz[i][j]>max)
     {
       max=matriz[i][j];
     }
    }
  }

printf("El maximum es : %f \n",max);
}


void pbI(){
  int linea;
  double aux;
  printf("Ingrese el nombre de lineas de la matriz \n");
  scanf("%i",&linea);
  int columna;
  printf("Ingrese el nombre de columnas de la matriz \n");
  scanf("%i",&columna);
  double matriz[linea][columna];
  for (int i = 0; i < linea; i++)
  {
    for (int j = 0; j<columna; j++)
    {
      printf("Ingrese un valor por la matriz \n");
      scanf("%lf",&aux);
      matriz[i][j]=aux;
    }
  }
double max;
double sum;
sum=0;
  for (int i = 0; i < linea; ++i)
  {
    sum+=fabs(matriz[i][0]);
  }
max=fabs(sum);
sum=0;
for (int i = 0; i < columna; ++i)
{
  for (int j = 0; j < linea; ++j)
  {
    sum+=fabs(matriz[j][i]);
  }
  if (fabs(sum)>max)
  {
    max=fabs(sum);
  }else{sum=0;}
}
printf("%f\n",max );

}

/*  DIFF ENTRE I ET j ??????????????????????    */

void pbj(){
  int linea;
  double aux;
  printf("Ingrese el nombre de lineas de la matriz \n");
  scanf("%i",&linea);
  int columna;
  printf("Ingrese el nombre de columnas de la matriz \n");
  scanf("%i",&columna);
  double matriz[linea][columna];
  for (int i = 0; i < linea; i++)
  {
    for (int j = 0; j<columna; j++)
    {
      printf("Ingrese un valor por la matriz \n");
      scanf("%lf",&aux);
      matriz[i][j]=aux;
    }
  }
double max;
double sum;
sum=0;
  for (int i = 0; i < linea; ++i)
  {
    sum+=fabs(matriz[i][0]);
  }
max=fabs(sum);
sum=0;
for (int i = 0; i < columna; ++i)
{
  for (int j = 0; j < linea; ++j)
  {
    sum+=fabs(matriz[j][i]);
  }
  if (fabs(sum)>max)
  {
    max=fabs(sum);
  }else{sum=0;}
}
printf("%f\n",max );

}


void pbk(){
printf("Tomese un descanso");
}


void pbL(){
  printf("Tomese dos descansos");
}



int main(){
  int choix;
  choix=0;
  printf("Ingrese el numero : \n ");
  printf("1 por el problema A \n ");
  printf("2 por el problema B \n ");
  printf("3 por el problema C \n ");
  printf("4 por el problema D \n ");
  printf("5 por el problema E \n ");
  printf("6 por el problema F \n ");
  printf("7 por el problema G \n ");
  printf("8 por el problema H \n ");
  printf("9 por el problema I \n ");
  printf("10 por el problema j \n ");
  printf("11 por el problema k \n ");
  printf("12 por el problema L \n ");
  scanf("%i",&choix);


      if(choix==1){
        pbA();
      }else if(choix==2){
        pbB();
      }else if(choix==3){
        pbC();
      }else if(choix==4){
        pbD();
      }else if(choix==5){
        pbE();
      }else if(choix==6){
        pbF();
      }else if(choix==7){
        pbG();
      }else if(choix==8){
        pbH();
      }else if(choix==9){
        pbI();
      }else if(choix==10){
        pbj();
      }else if(choix==11){
        pbk();
      }else if(choix==12){
        pbL();
      }else{
        printf("Error, proxima ver ingrese un numero entre 1 y 11");
      }
return EXIT_SUCCESS;
}


