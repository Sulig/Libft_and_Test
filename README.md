# Libft_and_Test
Resumen: Este proyecto consiste en programar una librería en C.  Tu librería tendrá un montón de funciones de propósito general en las que se apoyarán tus programas.

## Contenido del repositorio:
- Libft + Bonus
- Tests basicos *(Se estan cambiando algunos tests)* + test para los bonus
- GetNextLine *Solo como ayuda en los tests de Put*
- Carpeta donde se guardan los resultados de Put *En proceso*
- Subject

## !! Importante Antes de ejecutar 'make'!!
1. En el Makefile cambia la variable "DIR" por el directorio de tu get_next_line
2. En el archivo "test_getnextline.h", cambia el directorio donde esta incluido tu "get_next_line.h"
3. Guarda todo y ya esta listo para usar!
***
## Comandos:
### Tests:

Auto Test

    make test

Test Manual

    make
    ./test.out + Directorio/Archivo.txt

### Debuggeador:

    make debug

*Valgrind (Solo funcionara si tienes valgrind)*

    make valgrind

### Limpiar archivos innecessarios:

Limpia solo *.o y los .out

    make clean

Limpieza profunda + borrado de .out.dSYM

    make fclean
    
Igual que fclean + limpia la pantalla

    make clear

***
~ Made by sadoming ~
