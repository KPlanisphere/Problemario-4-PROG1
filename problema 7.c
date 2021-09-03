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
                    printf("\n Usted se encuentraa en SOBREPESO");
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
    char op, op2;
    
    do
    {
        printf("\n  Escoger la opcion que desea (1-3):");
        printf("\n [1] Saber su Indice De Masa Corporal (IMC).");
        printf("\n [2] Solicitar tabla de clasificacion con mayor detalle.");
        printf("\n [3] Salir. \n");
        fflush(stdin);
        scanf("%c", &op);
    
    switch (op)
    {
    case '1':
            printf("\n Introduzca su masa corporal: ");
            scanf("%f", &peso);
            printf("\n Introduzca su estatura ej(1.70): ");
            scanf("%f", &estatura);
            IMC = IndiceMasaCorporal(peso,estatura);
            printf("\n Su indice de masa coporal es: %f ", IMC );
            Clasificacion(IMC);
            printf("\n");
    break;

    case '2':
            printf("\n     IMC      ||      Casificacion        ");
            printf("\n  Menor a 18  || Peso bajo. Necesrio valorar signos de desnutricion. ");
            printf("\n  18 a 24.9   || Normal        ");
            printf("\n  25 a 16.9   || Sobrepeso        ");
            printf("\n  Mayor a 27  || Obesidad        ");
            printf("\n  27 a 29.9   || Obesidad Grado I. Riesgo relativo 'Alto' para desarrollar enfermedades cardiovasculares.");
            printf("\n  30 a 39.9   || Obesidad Grado II. Riesto relativo 'Muy alto' para desarrollar enfermedades cardiovasculares.      ");
            printf("\n  Mayor a 40  || Obesidad Grado III Extrema o Morbida. Riesto relativo 'Extremadamente alto' para desarrollar enfermedades cardiovasculares.");
            printf("\n");
    break;

    case '3':
            printf("\n ¿Desea salir del programa (s/n)?");
            fflush(stdin);
            scanf("%c", &op2);
            
    break;

    default:printf("\n Operador no definido, intente de nuevo."); 
            printf("\n");   
    }
    } while (op2!= 's' && op2!= 'S');

    return 0;
}
