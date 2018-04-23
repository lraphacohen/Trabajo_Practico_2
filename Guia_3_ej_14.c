#include <stdio.h>
#include <stdlib.h>

void funcion(void) {
    static int x = 0;
    x++;
    printf("%d\n", x);
}

int main(void)
{
    funcion();
    funcion();
    funcion();
    funcion();
    funcion();

    return EXIT_SUCCESS;
}

/* La funcion funcion va tomar un variable x (=0), cada vez que utilizamos este funcion x->x+1 y va imprimir la valor de x.
Asi la primera vez que llamamos la foncion, el ordenador va imprimir la valor 1, la secunda vez la valor 2 etc.
En el main, llamamos 5 veces la funcion. Entonces el ordenador va imrimir:
1
2
3
4
5
*/
