#include <stdio.h>

int vet[5];        
int matriz[2][2];  

////////////////////////////////////////////
int somaVetor() {
    int soma=0;
    for (int i=0;i<5; i++) {
        soma+=vet[i];
    }
    return soma;
}
///////////////////////////////////////////
void preencherMatriz(int soma) {
    for (int i=0;i<2;i++) {
        for (int j=0;j<2;j++) {
            matriz[i][j]=soma;
        }
    }
}
///////////////////////////////////////////
void imprimirMatriz() {
    printf("Matriz 2x2:\n");
    for (int i=0;i<2;i++) {
        for (int j=0;j<2;j++) {
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
}
////////////////////////////////////////////

int main() {
    for (int i=0;i<5;i++) {
        printf("Digite o %dº valor: ",i+1);
        scanf("%d",&vet[i]);
    }
    int soma=somaVetor(); // Soma vai receber o valor de return da funcao
    preencherMatriz(soma);
    imprimirMatriz();
}
