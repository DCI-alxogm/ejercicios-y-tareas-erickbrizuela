#include <stdio.h>
//usando if else goto
int main()
    int numero,residuo;
    char opc[2];
leernumero:
	printf("introducice un numero para saber si es par o impar\n");
	scanf("%i",&numero);
	residuo=numero%2;
	if (residuo==0)^{
	printf("el numero%i es par\n",numero);
	}else{
	printf("el numero%i es impar\n",numero);
}
	printf("quieres revisar otro numero? ");
	scanf("%s",opc);
	if (strcmp(opc,"si")==0){
		goto leernumero;
		}else if( strcmp(opc,"no")==0){
		printf("hasta la proxima\n");
	}else{
		printf("solo acpeto si o no");
	}
return (0);
}gcc
