#include <stdlib.h>
#include<stdio.h>
#include "funciones.h"
#include<math.h>
int main()
{   float x,y,resultado;
    char seguir='s';
    int opcion=0;

    while(seguir=='s')
    {   printf("\n");
        printf("CALCULADORA Vladimir Moreyra\n");
        printf("-----------Menu-------------\n");
        printf("1- Ingresar 1er operando (A=%.2f)\n",x);
        printf("2- Ingresar 2do operando (B=%.2f)\n",y);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");
        printf("Elija las opciones del Menu:");
        scanf("%d",&opcion);
        fflush(stdin);

        switch(opcion)
        {
            case 1:
                printf("Ingrese 1er operando A:");
                scanf("%f",&x);
                fflush(stdin);
                system("cls");
                break;
            case 2:
                printf("Ingrese 2do operando B:");
                scanf("%f",&y);
                fflush(stdin);
                system("cls");
                break;
            case 3:
                resultado=suma(x,y);
                printf("%.2f + %.2f= %.2f\n",x,y,resultado);
                system("pause");
                system("cls");
                break;
            case 4:
                resultado=resta(x,y);
                printf("%.2f - %.2f= %.2f\n",x,y,resultado);
                system("pause");
                system("cls");
                break;
            case 5:
                resultado=division(x,y);
                if(y!=0){
                printf("%.2f / %.2f = %.2f\n",x,y,resultado);
                system("pause");
                system("cls");
                }
                else{
                printf("ERROR EN DIVISION POR 0\n");
                system("pause");
                system("cls");}
                break;
            case 6:
                resultado=multiplicacion(x,y);
                printf("%.2f x %.2f = %.2f\n",x,y,resultado);
                system("pause");
                system("cls");
                break;
            case 7:
                if(x>=0){
                resultado=fact(x);
                printf("(%0.0f!) = %0.0f\n",x,resultado);
                system("pause");
                system("cls");}
                else{
                printf("ERROR EN FACTORIAL DE NUMERO NEGATIVO\n");
                system("pause");
                system("cls");}
                break;
            case 8:
                resultado=suma(x,y);
                printf("%.2f + %.2f= %.2f\n",x,y,resultado);
                resultado=resta(x,y);
                printf("%.2f - %.2f= %.2f\n",x,y,resultado);
                resultado=division(x,y);
                 if(y!=0){
                printf("%.2f / %.2f = %.2f\n",x,y,resultado);
                    }
                else{
                printf("ERROR EN DIVISION POR 0\n");
                    }
                resultado=multiplicacion(x,y);
                printf("%.2f x %.2f= %.2f\n",x,y,resultado);
                resultado=fact(x);
                 if(x>=0){
                resultado=fact(x);
                printf("(%0.0f!) = %0.0f\n",x,resultado);
                system("pause");
                system("cls");}
                else{
                printf("ERROR EN FACTORIAL DE NUMERO NEGATIVO\n");
                system("pause");
                system("cls");
                    }
                break;
            case 9:
                printf("\n\n\nPara salir presione cualquier tecla!\n\n\n\n\n");
                seguir = 'n';
                break;

                default:
                    printf("ERROR,reingrese la opcion correcta:");
                     scanf("%d",&opcion);
                    fflush(stdin);
                    system("cls");
        }
    }
return 0;
}
