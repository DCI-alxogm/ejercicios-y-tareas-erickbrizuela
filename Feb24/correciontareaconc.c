/******************************************************************************
erick brizuela lazcano
programa 24 feb2025
correccon de tarea de 
conversion de cordenadas rectangulares a cilindricas y esfericas
*******************************************************************************/
#include <stdio.h>
#include <math.h>//usar para funciones matematicas mas complejas como potencias y raicez
int main()
{
    //definir variables,cordenadas //cambiar o,q por theta y phi
    float x,y,z,re,rc,theta,phi;
//indica que hace el programa
    printf("este programa convierte cordenadas rectangulares en cordenadas esfericas y cilindrcas, porfavor introduce cordenadas validas para converir:\n");
    //lee las cordenadas dadas antes de convertirlas y otorgarlas al usuario para estar seguros cuales son
//lee la cordenadas otorgadas
scanf("%f",&x);
scanf("%f",&y);
scanf("%f",&z);
//define las conversions de cordenadas//hacer que r sea re y rc, que se llamen igual pero imprima cada una 
rc=sqrt(pow(x,2)+pow(y,2));
re=sqrt(pow(x,2)+pow(y,2)+pow(z,2));
theta=atan(y/x);
theta=theta*(180.0/M_PI);
phi=acos(z/sqrt(pow(x,2)+pow(y,2)+pow(z,2)));
phi=phi*(180.0/M_PI);
//salida
//otorga las cordenadas ya convertidas
printf("las cordenadas introducidas (x,y,z) y convertidas en esfericas (r,theta,phi) son: (%f,%f,%f)\n",re,theta,phi);
printf("las cordenadas introducidas (x,y,z )y convertidas en cilindricas (r,theta,z)son: (%f,%f,%f)\n",rc,theta,z);
    return 0;
}
