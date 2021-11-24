# Explicación de archivos

En estos archivos calc.c, calcula.c y calc.h creamos una serie de funciones y librerias que luego van a ser llamadas para ser ejecutadas.

A estas funciones les pasaremos una serie de parámetros para que puedan ejecutarse y mostrar el resultado respecto a sus parámetros.

<br><br>

# Apuntes de funcionamiento:

Compilar el archivo con el nombre de "hola"
 > gcc hola.c -o hola

Lo mismo pero para mostrar las advertencias:
 > gcc -Wall -g hola.c -o hola
 
------------------------

Compilar archivo:  
 > gcc archivo.c

Ejecutar archivo compilado:
 > ./a.out

Punteros de variables:
 > printf("La suma entre %d y %d es: %d",a,b,suma(a,b));
 
Compilar con todo lo necesario
 > gcc -c calc.c -o calc.o 
 
 > gcc calcula.c calc.o -o calcula

-----

sudo apt install make

Después de montar el archivo make, ejecutamos el siguiente comando y nos compila todo lo que hemos preparado
 > make

Después de montar en el archivo make la instruccion de clean ejecutamos lo siguiente para que se actualice:
 > make clean



