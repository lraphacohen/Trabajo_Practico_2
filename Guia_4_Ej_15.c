#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/* A*/

double polyval(const double coeffs[],size_t n, double x0){
    double res;
    int puissance;
    puissance=n-1;
    int i;
    res=0;
    for (i=0; i<n; i++) {
        res=res+(coeffs[i]*pow(x0,puissance));
        puissance--;
    }
    printf("P(%f)=%f",x0,res);

}


/*  B      */

double diffval (const double coeffs[],size_t n, double x0, int k ){
    int i;
    int puissance;
    puissance=n-1;
    int v=1;
    int coef2[n];
    for (int i = 0; i < n; ++i)
    {
        coef2[i]=coeffs[i];
    }

    while(v<=k){
        int vectorAux[n-v];
        for (int i = 0; i < n-v; ++i)
        {
            vectorAux[i]=coef2[i]*(n-v-1-i);
        }
        int coef2[n-v];
        for (int i = 0; i < n-v; ++i)
        {
            coef2[i]=vectorAux[i];
        }
        v++;
    }


    double res;
    res=0;
    puissance=n-k-1;
    for (i=0; i<n-k; i++)
    {
        res=res+(coef2[i]*pow(x0,puissance));
        puissance--;
    }
    printf("P(%f)=%f",x0,res);

}


/* C*/

double polypolyval(const double coeffs[],size_t n, double x0,double points[], int sizePoints){
    double resultat[sizePoints];
    double res;
    int puissance;
    puissance=n-1;
    int i;
    res=0;
    for (int k = 0; k < sizePoints; ++k)
    {
        for (i=0; i<n; i++) {
        res=res+((coeffs[i]*pow(x0,puissance))*points[k]);
        puissance--;
    }
    resultat[k]=res;
    }

    printf("{" );
    for (int j = 0; j < sizePoints; ++j)
    {
        printf("%f; ",resultat[j]);
    }
    printf("}");

}

void intervalPoly(){
    double valComienzo;
    double valFinal;
    int valQuantidad;
    printf("Ingrese el valor de comienzo\n");
    scanf("%lf",&valComienzo);
    printf("Ingrese el valor final\n");
    scanf("%lf",&valFinal);
    printf("Ingrese la quantidad\n");
    scanf("%i",&valQuantidad);

    if (valQuantidad>119){
           printf("Ingrese una quantidad <= 119\n");
        scanf("%i",&valQuantidad);
    }

    double polynome[valQuantidad];
    polynome[0]=valComienzo;
    polynome[valQuantidad-1]=valFinal;

    for (int i = 1; i < valQuantidad-1; ++i)
    {
        polynome[i]=polynome[i-1]+((valFinal - valComienzo )/valQuantidad);
    }

    for (int i = 0; i < valQuantidad; ++i)
    {
        printf("%f ", polynome[i] );
    }



}



int main(){
    int choix;
    choix=0;
    int n;
    n=5;
    double coeffs[n];
    coeffs[0]=1;
    coeffs[1]=2;
    coeffs[2]=3;
    coeffs[3]=4;
    coeffs[4]=5;
    double x0;
    x0=6;
    int k=2;
    int sizePoints;
    sizePoints=3;
    double points[3];
    points[0]=-2;
    points[1]=0;
    points[2]=2;




    printf("Ingrese el numero : \n");
    printf("1 por la funcion polyval \n");
    printf("2 por la funcion diffval \n");
    printf("3 por la funcion polypolyval \n");
    printf("4 por la funcion IntervalPoly \n");
    scanf("%i",&choix);



    if (choix==1)
    {
        polyval(coeffs,n,x0);
    }else if (choix==2)
    {
        diffval (coeffs,n,x0,k);
    }else if (choix ==3)
    {
        polypolyval(coeffs,n,x0,points,sizePoints);
    }else if (choix==4)
    {
        intervalPoly();
    }else{
        printf("Error, no ingrese una de las 4 posibilidades\n");
    }

return EXIT_SUCCESS;

}
