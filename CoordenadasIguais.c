/*Elabore um algoritmo que possua uma matriz (4,4). Preencha a matriz com valores inteiros. 
Depois corra a matriz e imprima os valores que estão nas casa que possuem coordenadas iguais*/

#include <stdio.h>

int main() {
    int mat[4][4],i,j;
    for (i=0;i<4;i++) {
        for (j=0;j<4;j++) {
            printf("Digite o valor para mat[%d][%d]: ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Valores nas coordenadas iguais:\n");
    for (i=0;i<4;i++) {
        for (j=0;j<4;j++) {
            if (i==j) {
                printf("mat[%d][%d] = %d\n",i,j,mat[i][j]);
            }
        }
    }
}

