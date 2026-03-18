# 🧠 C básico

Estructura mínima
```c
#include <stdio.h>

int main() {
    return 0;
}

----------------------------------------------------------------------------------------
Entrada y salida de datos
int x;
scanf("%d", &x);
printf("%d\n", x);
Condicionales (if / else)
if (x % 2 == 0) {
    printf("Par\n");
} else {
    printf("Impar\n");
}
----------------------------------------------------------------------------------------

Bucle for
for (int i = 0; i < 10; i++) {
    printf("%d\n", i);
}
----------------------------------------------------------------------------------------

Bucle while
int x = 1;
while (x != 0) {
    scanf("%d", &x);
}
----------------------------------------------------------------------------------------

Operadores importantes

% → resto (sirve para pares/impares)

== → igualdad

!= → distinto

<, >, <=, >= → comparaciones
----------------------------------------------------------------------------------------

Ejemplo típico: comprobar par o impar
int num;
scanf("%d", &num);

if (num % 2 == 0) {
    printf("Es par\n");
} else {
    printf("Es impar\n");
}
----------------------------------------------------------------------------------------

Consejos básicos

Siempre usar & en scanf

Cuidado con los espacios y saltos de línea en printf

Usar nombres de variables claros