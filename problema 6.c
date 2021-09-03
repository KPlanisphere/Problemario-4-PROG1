//Jesús Huerta Aguilar, Javier de La Luz Ruiz, Ernesto Flores Cesareo
//Programación I -  Inice De Masa Corporal IMC
#include <stdio.h>

    float IndiceMasaCorporal(float peso, float estatura){
        return peso/(estatura*estatura); 
    }

    void Clasificacion(float IMC){
        if (IMC <= 18)
        {
            printf("\n Usted se encuentra en PESO BAJO:");
        }else
        {
            if (IMC > 18 && IMC <= 24.9)
            {
                printf("\n Usted se encuentra en NORMAL");
            }else
            {
                if (IMC >= 25 && IMC <= 26.9)
                {
                    printf("\n Usted se encuentra en SOBREPESO");
                }else
                {
                    if (IMC >= 27 && IMC <= 29.9)
                    {
                         printf("\n Usted se encuentra en OBESIDAD GRADO I");
                    }else
                    {
                        if (IMC >= 30 && IMC <= 39.9)
                        {
                             printf("\n Usted se encuentra en OBESIDA GRADO II");
                        }else
                        {
                            if (IMC >= 40)
                            {
                                 printf("\n Usted se encuentra en OBESIDAD GRADO III");
                            }
                        
                        }
                        
                    }
                    
                }
                   
            }   

        }   

    }

int main(){
    
    float IMC, peso, estatura;
    
    printf("\n Introduzca su peso (kg): ");
    scanf("%f", &peso);
    printf("\n Introduzca su estatura (mt): ");
    scanf("%f", &estatura);
    IMC = IndiceMasaCorporal(peso,estatura);
    printf("\n Su indice de masa coporal es: %f ", IMC );
    Clasificacion(IMC);

    getch();
    return 0;

}