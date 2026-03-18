# ❌ Errores comunes en C (y cómo evitarlos)

🔴 No compilar antes de ejecutar
Intentar ejecutar el programa sin compilar.

✔️ Solución:
```bash
gcc programa.c -o programa.exe
./programa.exe
----------------------------------------------------------------------------------------

🔴 Estar en la carpeta incorrecta
Error típico:
No such file or directory

✔️ Solución:
usar pwd para ver dónde estás
usar ls para ver archivos
usar cd para moverte
----------------------------------------------------------------------------------------

🔴 scanf sin &
Error:
scanf("%d", x);   // ❌ MAL
Correcto:
scanf("%d", &x);  // ✅ BIEN
----------------------------------------------------------------------------------------

🔴 Formato de salida incorrecto
Problema:
espacios de más
saltos de línea mal puestos

👉 Esto rompe tests aunque el cálculo esté bien

✔️ Consejo:
copiar exactamente el formato pedido
cuidar " " y \n
----------------------------------------------------------------------------------------

🔴 Mezclar salida bonita con salida de test
Problema:
printf("Resultado: %d\n", x);   // puede romper tests

✔️ En prácticas:
usar solo el formato que pide el test
----------------------------------------------------------------------------------------

🔴 M_PI no definido
Error:

M_PI no está definido

✔️ Solución:
#define M_PI 3.14159265358979323846
----------------------------------------------------------------------------------------

🔴 División por cero
Ejemplo:
I = V / res;  // res = 0 → ERROR

✔️ Solución:
comprobar antes:

if (res == 0) {
    printf("ERROR\n");
}
----------------------------------------------------------------------------------------

🔴 No validar datos de entrada
Ejemplo:
números negativos cuando no deberían
valores fuera de rango

✔️ Solución:
usar if para controlar casos inválidos
----------------------------------------------------------------------------------------

🔴 Olvidar compilar el archivo correcto
Compilar otro archivo por error o ruta incorrecta.

✔️ Solución:
comprobar nombre del archivo
usar ls
----------------------------------------------------------------------------------------

🔴 Pensar que el código está mal cuando es el entorno

Ejemplo:
error en rutas
scripts de test fallando

✔️ Consejo:
revisar primero entorno antes de cambiar código