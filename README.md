# Libft_and_Test
Resumen: Este proyecto consiste en programar una librería en C.  Tu librería tendrá un montón de funciones de propósito general en las que se apoyarán tus programas.

## Contenido del repositorio:
- Libft + Bonus
- Tests basicos *(Se estan cambiando algunos tests)* + test para los bonus
- GetNextLine *Solo como ayuda en los tests de Put*
- Carpeta donde se guardan los resultados de Put *En proceso*
- Subject

## !Importante!
Para usar los tests, necesitaras un Makefile en tu directorio de libft, que contenga como minimo:
  - La regla $(NAME)
  - La regla clean
  - La regla fclean

### Antes de ejecutar 'make'!!
1. En el Makefile cambia las variables donde pone *Change this directory* por el directorio de tu libft y por donde se ubica tu printf.a
2. En el archivo "test_libft.h", cambia el directorio donde esta incluido tu "libft.h"
3. Guarda todo y ya esta listo para usar!
***
## Comandos:
### All
Compila todo lo necesario y ejecuta la norminette y los tests

    make

### Norminette

    make norminette

### Tests

    make test

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
***
