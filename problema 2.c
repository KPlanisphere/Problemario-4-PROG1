// 2. Programa que imprime el triángulo de Pascal

//cargar libreria/s
#include <stdio.h>

//Prototipo
long factorial(int);

//Principal
int main(){
	
	//Declarar variables
    int error,i, n, c;
    
    //Nota
    printf ("\n\t NOTA: Este programa SOLO acepta entradas por debajo de 13\n");    

	//Bucle do while
	do{
		
		//Ingreso de datos por teclado
    	printf ("\nIngrese el n%cmero de fila para imprimir el tri%cngulo de Pascal:\n",163,160);
    	scanf ("%d",&n);
    	
    	//Fuera de rango
    	if (n < 0){
    		printf ("\n[!] ERROR: Verifica tu informaci%cn [!]\n",162);
    		error = 1;
		}
		
		//Fuera del límite
		if (n >= 13){
			printf ("\n[!] ERROR: Constante supera el l%cmite [!]\n",161);
			error = 1;
		}
		printf ("\n");
	} while (error != 0);
	n+=1;
	
	printf ("Salida:\n");
	//Forma de trángulo
    for (i = 0; i < n; i++){
        for (c = 0; c <= (n - i - 2); c++){
            printf(" ");
        }
	//Salida de datos
    for (c = 0 ; c <= i; c++){
        printf("[%ld]", factorial(i)/(factorial(c)*factorial(i-c)));        
	}

        printf("\n");
    }
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
