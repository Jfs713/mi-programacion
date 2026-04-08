#include <stdio.h>

int main()
{
    int n_lineas;
    int i, j;

    printf("Introduce el numero de lineas: ");
    scanf("%d", &n_lineas);

    for (i = 1; i <= n_lineas; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}