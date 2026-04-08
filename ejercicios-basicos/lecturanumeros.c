#include <stdio.h>

int main()
{
    int numero;
    int suma = 0;
    int pares = 0;
    int impares = 0;

    printf("Introduce numeros enteros (0 para terminar):\n");
    scanf("%d", &numero);

    while (numero != 0)
    {
        suma = suma + numero;

        if (numero % 2 == 0)
        {
            pares++;
        }
        else
        {
            impares++;
        }

        scanf("%d", &numero);
    }

    printf("Suma total: %d\n", suma);
    printf("Numeros pares: %d\n", pares);
    printf("Numeros impares: %d\n", impares);

    return 0;
}