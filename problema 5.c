//Jesús Huerta Aguilar, Javier de La Luz Ruiz, Ernesto Flores Cesareo
//Programación I -  Grados
#include <stdio.h>

    float CelciusAFarenheit(float celcius){
        return (celcius * 1.8) + 32; 
    }

    float FarenheitACelcius(float farenheit){
        return (farenheit - 32) / 1.8;
    }

int main(){
    
    float farenheit, celcius, total;
    char op;
    
    printf( "\n                    >>> MENU GRADOS <<<" );
    printf( "\n  Escoger la opcion que desee (1-2), se muestra a continuacion: ");
    printf( "\n                (1) Para Celcius a Farenheit.");
    printf( "\n                (2) Para Farenheit a Celcius. \n");
    scanf( "%c", &op);

  switch (op){
    case '1':
            printf("\n Introduzca los grados Celcius para convertir: ");
            scanf("%f",&celcius);
            total = CelciusAFarenheit(celcius);
            printf("\n Su conversion a Grados Farenheit es: %f ºF", total ); 
    break;

    case '2':
            printf("\n Introduzca los grados Farenheit a convertir.");
            scanf("%f", &farenheit);
            total = FarenheitACelcius(farenheit);
            printf("\n Su conversion a Grados Celcius es: %f ºC", total );
    break;
    
    default: printf("\n Operador no definido, intente de nuevo."); 
}
    getch();
    return 0;

}

