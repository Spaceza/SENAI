#include <stdio.h>

int main() 
{
    int val, i, divisao=0;
    printf("Digite um valor: ");
    scanf("%d",&val);
    for (i=1;i<=val/2;i++) 
		{
        if (val%i==0) {
            divisao++;
        }
      }
            printf("Quantidade de divisisores: %d\n",divisao);
            divisao == 1 ? printf("Numero e primo\n"): printf("Nao e primo\n");
}


