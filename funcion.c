//fSuma

/** \brief Suma dos reales
 *
 * \param Primer real a sumar
 * \param Segundo real a sumar
 * \return La suma de los 2 parametros ingresados
 *
 */

float fSuma (float op1, float op2)
{
    float resultado;
    resultado=op1+op2;
    return resultado;
}

//fResta

/** \brief Resta dos reales
 *
 * \param Real minuendo
 * \param Real sustraendo
 * \return La resta de 2 parametros ingresados
 *
 */


float fResta(float op1, float op2)
{
    float resultado;
    resultado = op1 - op2;
    return resultado;
}

//fDivision

/** \brief Division de dos reales
 *
 * \param Numero dividendo
 * \param Numero divisor
 * \return La division de los 2 parametros ingresados
 *
 */

float fDivision(float op1, float op2)

{
    float resultado;
    resultado=op1/op2;
    return resultado;
}

//fMultiplicacion

/** \brief Multiplicaion de dos reales
 *
 * \param Primer real a multiplicar
 * \param Segundo real a multiplicar
 * \return La multiplicacion de 2 parametros ingresados
 *
 */

float fMultiplicacion(float op1, float op2)
{
    float resultado;

    resultado = op1* op2;

    return resultado;
}

//factorialUno

/** \brief  Factorial del primer parametro
 *
 * \param   Numero entero positivo
 * \return El producto de todos los números enteros positivos desde 1 hasta el parametro A
 *
 */


int factorialUno(int op1)
{
    int resultado1=1, auxop1, contador1;
    auxop1=op1;

    for(contador1=0; contador1<op1; contador1++)
    {
        resultado1=resultado1*auxop1;
        auxop1=auxop1-1;
    }

    return resultado1;

}

//factorialDos

/** \brief  Factorial del primer parametro
 *
 * \param   Numero entero positivo
 * \return El producto de todos los números enteros positivos desde 1 hasta el parametro B
 *
 */

int factorialDos (int op2)
{
    int resultado2=1, auxop2, contador2;
    auxop2=op2;
    for(contador2=0; contador2<op2; contador2++)
    {
        resultado2=resultado2*auxop2;
        auxop2=auxop2-1;
    }

    return resultado2;

}

