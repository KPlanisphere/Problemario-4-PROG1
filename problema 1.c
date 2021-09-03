/* 1. Programa que imprime los coeficientes de un binomio
elevado a la n-�sima potencia usando n�meros combinatorios*/

//Cargar libreria/s
#include <stdio.h>

//Prototipo
long factorial(int);

//Principal
int main(){
	
	//Declarar variables
    int error, n, c;
    
    //Nota
    printf ("\n\t NOTA: Este programa SOLO acepta entradas por debajo de 13\n");

	//Bucle do while
	do{
	
	//Ingreso de datos por teclado
    	printf ("\nIngrese un n%cmero para obtener sus coeficientes:\n",163,160);
    	scanf ("%d",&n);
    	
    	//Fuera de rango
    	if (n < 0){
    		printf ("\n[!] ERROR: Verifica tu informaci%cn [!]\n",162);
    		error = 1;
		}
		
		//Fuera del l�mite
		if (n >= 13){
			printf ("\n[!] ERROR: Constante supera el l%cmite [!]\n",161);
			error = 1;
		}
		printf ("\n");
	} while (error != 0);
	
		//Salida de datos
		printf ("\tSalida:\n");
    	for (c = 0 ; c <= n; c++){
	    	printf("[%ld] ", factorial(n)/(factorial(c)*factorial(n-c)));
    	}
    printf ("\n");
    //Cerrar programa
	system ("pause");
    return 0;
}

//Factorial
long factorial(int n){
    int c;
    long result = 1;

    for (c = 1; c <= n; c++){
        result *= c;
    }

    return result;
}