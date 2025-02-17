/* Inicia con comentarios. Típicamente:
Fecha de creación:
Autor:
Propósito o funcionalidad del programa.
Historial de versiones, o cambios importantes.
*/
 
//Esta es otra forma de poner un comentario, generalmente corto, e.g describiendo que hace una línea en particular. 
//Los comentarios no afectan la compilación/ejecución del programa.
//Son informativos y muy muy útiles tanto para quien escribe el programa, como para un futuro usuario.
 
#include <stdlib.h> //librería estándar de C.
#include <stdio.h>  //Librería para interacción con la pantalla.
 
int main( ){
   //Cuerpo del programa;
   //Se indican todas las instrucciones a realizar. El ejemplo más simple es imprimir un mensaje de saludo a la pantalla.
    exit(0);  //al llegar a esta linea terminará el programa exitosamente. 
    // return(0); //También puede usarse para que el programa termine regresando un número entero 0 indica que el programa terminó exitosamente. 
   
}
 
/*
Es posible definir otras funciones, además de la principal.
Por ahora al estar dentro de un comentario, es como si esta función no existiera.
int funcion1(){
 
   Aquí estarían las instrucciones a realizar por una función secundaria.
   Veremos los diferentes tipos de funciones durante el curso, incluidas diferentes formas de definir la función principal.
  
}

*/
