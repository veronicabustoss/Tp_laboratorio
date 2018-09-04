///Librerias
#include <stdio.h>
#include <stdlib.h>
#include "funcion.h"

int main()
{
    float suma, resta, multiplicacion, division;
    int opcion, factorialA, factorialB;
    float op1=0;
    float op2=0;
    int banderaUno=0;
    int banderaDos=0;
    do
    {
        system("pause");
        system("cls");
        printf("Menu");
        printf("\n\n 1 .Ingresar 1er operando (A=%.2f) ",op1);
        printf("\n 2 .Ingresar 2do operando (B=%.2f) ",op2);
        printf("\n 3 .Calcular todas las operaciones");
        printf("\n a- Calcular la suma A+B");
        printf("\n b- Calcular la resta A-B");
        printf("\n c- Calcular la division A/B");
        printf("\n d- Calcular la multiplicacion A*B");
        printf("\n e- Calcular el factorial de A! y B!\n");
        printf("\n 4. Mostrar resultados");
        printf("\n a- El resultado de A+B es: r");
        printf("\n b- El resultado de A-B es: r");
        printf("\n c- El resultado de A/B es: r");
        printf("\n d- El resultado de A*B es: r");
        printf("\n e- El factorial de A es: r1 y El factorial de B es: r2\n");
        printf("\n 5. Salir de la calculadora");
        printf("\n ---------------------------------- \n");
        printf("\n\n Seleccione opcion: ");
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            banderaUno = 1;
            printf("\nIngrese el primer numero:");
            scanf("%f",&op1);
            break;
        case 2:
            banderaDos = 1;
            printf("\nIngrese el segundo numero:");
            scanf("%f",&op2);
            break;
        case 3:
            if(banderaUno == 1 && banderaDos==1)
            {
                suma=fSuma(op1,op2);
                resta=fResta(op1,op2);
                if(op2==0)
                {
                    printf("\n Error, no es posible dividir por cero\n");
                }
                else
                {
                    division=fDivision(op1,op2);
                }
                multiplicacion=fMultiplicacion(op1,op2);
                if(op1==0 || op2==0)
                {
                    printf("\nError, no es posible calcular el factorial de cero\n");
                }
                else
                {
                    factorialA=(int) factorialUno(op1);
                    factorialB=(int) factorialDos(op2);
                }

            }
            else
            {
                printf("\nNo se han ingresado los datos\n");
            }

            break;
        case 4:
            if(banderaUno == 1 && banderaDos==1)
            {
                printf("\n\nEl resultado de %.3f+%.3f es = %.3f ",op1,op2, suma);
                printf("\n\nEl resultado de %.3f-%.3f es = %.3f ",op1,op2, resta);
                if (op2==0)
                {
                    printf("\n Error, no es posible mostrar el resultado ");
                }
                else
                {
                    printf("\n\nEl resultado de %.3f/%.3f es = %.3f ",op1,op2, division);
                }
                printf("\n\nEl resultado de %.3f*%.3f es = %.3f ",op1,op2, multiplicacion);
                if(op1==0 || op2==0)
                {
                    printf("\n Error, no es posible mostrar el resultado ");
                }
                else
                {
                    printf("\n\nEl resultado de %.0f! es = %d ",op1,factorialA);
                    printf("\n\nEl resultado de %.0f! es = %d \n\n ",op2,factorialB);
                }


            }
            else
            {
                printf("\nNo se han ingresado los datos\n");
            }
            break;
        case 5:
            printf("\n Gracias por usar la calculadora");
            break;
        default:
            printf( "\n   ERROR: El dato que ingreso es incorrecto.\n" );//informa que es incorrecto
        }
    }
    while(opcion!=5);
    return 0;
}

