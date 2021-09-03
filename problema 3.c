//Jesús Huerta Aguilar, Javier de La Luz Ruiz, Ernesto Flores Cesareo
//Programación I - "Programa: Lectura de numeros naturales con casos determinados"
#include <conio.h>
#include <stdio.h>
//PROTOTIPOS
int primo(int x);
void fact(int n);
void mult(int n);
//PRINCIPAL
int main(){
    int n;
    printf("Ingrese un numero natural (n >= 0)");
    printf("\nNOTA: Para salir ingrese cualquier numero negativo.\n\n");
    do{
        scanf("%d",&n);
        if (n >= 0){
            if (primo(n) == 1){
                fact(n);
            }
            else{
                mult(n);
            }
        }
    } while (n >= 0); 
    //system("PAUSE");
    printf("\n\tGracias por usar nuestros servicios.");
    getch();
    return 0;
}
//DETECTAR PRIMOS
int primo(int x){
    int i,con;
    for ( i = 1; i <= x; i++)
    {
        if(x%i==0){
            con++;
        }
    }
    if (con > 2){
        return 0;
    }
    else{
        return 1;
    } 
}
//FACTORIAL
void fact(int n){
    int i;
    double f=1;
    for (i = 1; i <= n; i++){
        f = f*i;
    }
    printf(" -> PRIMO: %d! = %.lf\n",n,f);
}
//MULTIPLOS
void mult(int n){
    int i;
    printf(" -> NO PRIMO: M(%d) = {",n);
    for (i = 1; i <= 1000; i++)
    {
        if (i%n==0){
            printf("%d,",i);
        }
    }
    printf("}\n");
}