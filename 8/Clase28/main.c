#include <stdio.h>


 int suma (int, int);

int main()
{

    int nro1,nro2,res;
    printf("Ingrese el primer numero: ");
    scanf("%d",&nro1);

    printf("Ingrese el segundo numero: ");
    scanf("%d",&nro2);

    res=suma(nro1,nro2);

    printf("Resultado: %d",res);
    return 0;
}

    int suma (int op1, int op2)
{
    int resultado;
    resultado = op1 + op2;
    return resultado;
}


