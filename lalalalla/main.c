#include <stdio.h>
#include <stdlib.h>

int factorial(int);
int main()
{
    int resultado;
    resultado = factorial(5);
    printf("El factorial es %d", resultado);
    return 0;
}
int factorial(int numero)
{
    int resultado;

    if(numero == 0)
    {
        resultado = 1;
    }
    else
    {
        resultado = numero * factorial(numero - 1);
    }


}
