#include "funciones.h"

/** \brief recibe dos numeros enteros o decimales y calcula la suma de ambos
 * \param x correspondiente al valor numerico x de la suma
 * \param y correspondiente al valor numerico y de la suma
 * \return la suma de dos numeros
 */
float suma(float x,float y)
{
    float resultado;
    resultado=x+y;
    return resultado;
}


/** \brief recibe dos numeros enteros o decimales y calcula la resta de ambos
 * \param x correspondiente al valor numerico x de la resta
 * \param y correspondiente al valor numerico y de
 * \return la resta de dos numeros
 */
float resta(float x, float y)
{
    float resultado;
    resultado=x-y;
    return resultado;
}


/** \brief recibe dos numeros enteros o decimales y calcula la division entre ambos
 * \param x corresponde al valor numerico, es decir, el dividendo de la division
 * \param y corresponde al valor numerico, es decis, el divisor de la division
 * \return el cociente de la division
 */
float division(float x, float y)
{
    float resultado;
    resultado=x/y;
    return resultado;
}


/** \brief recibe dos numeros enteros o decimales y calcula su multiplicacion
 * \param x corresponde al valor numerico, es decir, el multiplicando de la multiplicacion
 * \param y corresponde al valor numerico, es decir, el multiplicador de la multiplicacion
 * \return el producto de la multiplicacion
 */
int multiplicacion(float x, float y)
{
   float resultado;
   resultado=x*y;
   return resultado;

}


/** \brief recibe um valor numerico tomando la parte entera para calular su factorial
 * \param x correspondiente al valor numerico para obtener el factorial
 * \return el factorial de un numero
 */

long long int fact(int x)
{
   long long int fact=1,i=1,resultado;

        for(i=1; i<=x; i++)
        {
        fact=fact*i;


        }
        resultado=fact;
       return resultado;

}
