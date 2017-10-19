
#include <conio.h>
#include <stdio.h>

int main()
{
    int opcion;
    float n1, n2;

    do
    {
        printf( "\n   SUMA Y RESTA   " );
        printf( "\n\n   1. Sumar dos numeros.");
        printf( "\n   2. Restar dos numeros."  );
        printf( "\n   3. Salir.\n" );
        do
        {
            printf( "\n   Introduzca opcion (1-3): " );
            scanf( "%c", &opcion);
        } while ( opcion < '1' || opcion > '3' );
        switch ( opcion )
        {
            case '1': printf( "\n   Introduzca primer numero: " );
                      scanf( "%f", &n1);
                      printf( "\n   Introduzca segundo numero: " );
                      scanf( "%f", &n2);
                      printf( "\n   %f + %f = %f\n", n1, n2, n1 + n2 );
                      break;

            case '2': printf( "\n   Introduzca primer numero: " );
                      scanf( "%f", &n1);
                      printf( "\n   Introduzca segundo numero: " );
                      scanf( "%f", &n2);
                      printf( "\n   %f - %f = %f\n", n1, n2, n1 - n2 );
                      break;

        }

    } while ( opcion != '3' );

    return 0;
}
