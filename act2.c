#include <stdio.h>
int calcularFactorial(int a);
int main()
{
    int num, repe, resu;
inicio:
    printf("INGRESE UN NUMERO POSITIVO PARA OBTENER SU FACTORIAL\n");
    scanf("%d", &num);
    if (num > 0)
    {
        resu = calcularFactorial(num);
        printf("El factorial de %d es %d\n", num, resu);
        printf("QUIERES OBTENER EL FACTORIAL DE OTRO NUMERO?\n1=SI\n2=NO\n");
        scanf("%d", &repe);
        if (repe == 1)
        {
            goto inicio;
        }
        else
        {
            printf("GARCAIS POR USAR EL CODIGO");
            return 0;
        }
    }
    else
    {
        printf("////LOS NEGATIVOS NO TIENEN FACTORIAL////\n");
        goto inicio;
    }
}

int calcularFactorial(int a)
{
    int i, fac;
    fac = a;
    for (i = 1; i < a; i++)
    {
        fac = fac * i;
    }

    return fac;
}