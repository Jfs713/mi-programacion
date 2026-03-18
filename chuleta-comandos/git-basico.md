 🔧 Git básico

📌 Guardar cambios
```bash
git add .
git commit -m "mensaje"
git push

👉 Flujo típico:
haces cambios
git add .
git commit
git push
----------------------------------------------------------------------------------------

📌 Ver estado
git status
👉 Muestra:
archivos modificados
archivos nuevos
si falta hacer commit
----------------------------------------------------------------------------------------

📌 Ver historial
git log
👉 Ver commits anteriores
----------------------------------------------------------------------------------------

📌 Subir cambios (importante)
git push
👉 Sube tu código a GitHub
----------------------------------------------------------------------------------------

📌 Descargar cambios
git pull
👉 Trae cambios del repositorio remoto
----------------------------------------------------------------------------------------

📌 Clonar repositorio
git clone URL
👉 Copia un repo a tu máquina/codespace
----------------------------------------------------------------------------------------

📌 Qué es cada cosa
local → tu codespace
remoto → GitHub
👉 Tú trabajas en local → luego haces push
----------------------------------------------------------------------------------------

📌 git merge (explicado fácil)
👉 Sirve para unir cambios de otra rama

Ejemplo:
git merge nombre-rama
👉 PERO:
en tu caso (básico) casi no lo vas a usar
porque trabajas en main
----------------------------------------------------------------------------------------

📌 Problema típico (importante)

❌ Olvidar hacer push
→ el código no se guarda en GitHub

✔️ Solución:
👉 siempre después de trabajar:

git add .
git commit -m "mensaje"
git push