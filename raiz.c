#include<stdio.h>
#include<math.h>

int main()
{
    float numero;
    printf("Digite o número: ");
    scanf("%f", numero);

    if (numero >=0)
    {
      printf("Raiz quadrada: %.2f\n"), numero;
    }
    else
    {
        printf("Quadrado:%.2f\n"),numero*numero;
    }
    return 0;
}
