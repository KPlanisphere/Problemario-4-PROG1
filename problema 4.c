//Jesús Huerta Aguilar, Javier de La Luz Ruiz, Ernesto Flores Cesareo
//Programación I - "Programa: Serie de Taylor de la funcion coseno"
#include <conio.h>
#include <stdio.h>
#include <math.h>
//PROTOTIPOS
void rad(float *x);
int fact(int n);
float pwr(int dpon,float x);
//PRINCIPAL
int main(){
    //DECLARAR VARIABLES
    int n,i,dpon,error,band=1,dera=1,cont=0;
    float x,res,val;
    dpon = 0;
    //ENTRADAS GENERALES
    do
    {
        error = 0;
        printf("Catidad de terminos de la serie de Taylor: ");
        scanf("%d",&n);
        printf("Valor de x: ");
        scanf("%f",&x);
        if (n <= 0 || x <= 0){
            printf("\n[!] ERROR: Verifica tu informacion [!]\n\n");
            error = 1;
        }
        
    } while (error != 0);
    //GRADOS A RADIANES
    printf("\n%f%c = ",x,248);
   // printf("\nValor Xi: %f",x);
    rad(&x);
    //printf("\nValor Xf: %f\n",x);

    printf("%0.10frad [aprox]\n",x);
    //SERIE DE TAYLOR
    do{
        //CASO PRIMER VALOR
        if (band == 1){
            res = 1;
            band = 0;
        }
        else{  
            //OTROS VALORES
            for (i = 2; i <= n; i++){
                dpon = dpon + 2;
                val = pwr(dpon,x)/fact(dpon);
                if (dera == 1){
                    res = res - val;
                    dera = 0;
                }
                else{
                    res = res + val;
                    dera = 1;
                }
            }
        }
        cont++;
    } while (cont <= 1);
    //SALIDAS
    printf("\nValor aploximado con %d terminos: \n\n\tCos(%f) = %0.15f\n",n,x,res);
    printf("\nGracias por usar nuestros servicios.");
    getch();
    return 0;
}
//GRADOS A RADIANES
void rad(float *x){
    *x = (*x * M_PI)/180;
}
//FACTORIAL
int fact(int n){
    int i;
    float f=1;
    for (i = 1; i <= n; i++){
        f = f*i;
    }
    return f;
}
//POTENCIADOR
float pwr(int dpon,float x){
    int j;
    float power=1;
    for (j = 1; j <= dpon; j++){
        power = power*x;
    }
    return power;
}