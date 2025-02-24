/******************************************************************************
erick brizuela lazcano
programa 19 feb2025
conversion de cordenadas rectangulares a cilindricas y esfericas
*******************************************************************************/
#include <stdio.h>
#include <math.h>//usar para funciones matematicas mas complejas como potencias y raicez
int main()
{
    //definir variables,cordenadas
    float x,y,z,re,rc,o,q;
//indica que hace el programa
    printf("este programa convierte cordenadas rectangulares en cordenadas esfericas y cilindrcas, porfavor introduce cordenadas validas para converir:\n");
//lee la cordenadas otorgadas
scanf("%f",&x);
scanf("%f",&y);
scanf("%f",&z);
//define las conversions de cordenadas
rc=sqrt(pow(x,2)+pow(y,2));
re=sqrt(pow(x,2)+pow(y,2)+pow(z,2));
o=atan(y/x);
o=o*(180.0/M_PI);
q=acos(z/sqrt(pow(x,2)+pow(y,2)+pow(z,2)));
q=q*(180.0/M_PI);
//otorga las cordenadas ya convertidas
printf("las cordenadas introducidas (x,y,z) y convertidas en esfericas (re,o,q) son: (%f,%f,%f)\n",re,o,q);
printf("las cordenadas introducidas (x,y,z )y convertidas en cilindricas (rc,o,z)son: (%f,%f,%f)\n",rc,o,z);
    return 0;
}

