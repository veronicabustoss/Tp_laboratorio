float fSuma (float op1, float op2)
{
    float resultado;
    resultado=op1+op2;
    return resultado;
}

float fResta(float op1, float op2)
{
    float resultado;
    resultado = op1 - op2;
    return resultado;
}

float fDivision(float op1, float op2)

{
    float resultado;
    resultado=op1/op2;
    return resultado;
}

float fMultiplicacion(float op1, float op2)
{
    float resultado;

    resultado = op1* op2;

    return resultado;
}

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

