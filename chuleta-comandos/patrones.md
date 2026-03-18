# 🔁 Patrones típicos en programación

📌 Contar pares e impares
```c
int pares = 0, impares = 0, num;

for (int i = 0; i < 10; i++) {
    scanf("%d", &num);

    if (num % 2 == 0) {
        pares++;
    } else {
        impares++;
    }
}
----------------------------------------------------------------------------------------

📌 Triángulo creciente

Ejemplo:
1
12
123

for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
        printf("%d", j);
    }
    printf("\n");
}
----------------------------------------------------------------------------------------

📌 Triángulo invertido
Ejemplo:
5 4 3 2 1
4 3 2 1

for (int i = n; i >= 1; i--) {
    for (int j = i; j >= 1; j--) {
        printf("%d ", j);
    }
    printf("\n");
}
----------------------------------------------------------------------------------------

📌 Contador acumulativo
int contador = 0;
contador++;
----------------------------------------------------------------------------------------

📌 Leer datos hasta condición
Ejemplo: parar cuando se introduce 0

int x;

scanf("%d", &x);

while (x != 0) {
    scanf("%d", &x);
}
----------------------------------------------------------------------------------------

📌 Leer hasta valor especial (sentinela)
Ejemplo: -99

int x;

scanf("%d", &x);

while (x != -99) {
    scanf("%d", &x);
}
----------------------------------------------------------------------------------------

📌 Acumular valores
int suma = 0, x;

scanf("%d", &x);

while (x != -99) {
    suma += x;
    scanf("%d", &x);
}
----------------------------------------------------------------------------------------

📌 Uso de dos bucles (clave)
👉 Muy importante para ejercicios de patrones

for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
        printf("*");
    }
    printf("\n");
}
----------------------------------------------------------------------------------------

📌 Insertar en número (idea básica)
👉 dividir número en partes

int izquierda = numero / divisor;
int derecha = numero % divisor;
📌 Ajustar ángulos
angulo = angulo % 360;

if (angulo < 0) {
    angulo += 360;
}