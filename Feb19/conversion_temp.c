/*programa feb19:convierte temperaturas en grados celcius a grados kelvin  */

#include <stdio.h>
#include <stdlib.h>

int main (){
float TC, TK;
printf("introduce el valor de la temperatura en celius a convertir a kelvin\n");
scanf("%f",&TC);
TK=TC+273.15;
printf("la temperatura en kelvin es : %f\n",TK);
exit(0);
}
