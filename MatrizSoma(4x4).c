#include <stdio.h>

int main() {
    int mat1[4][4],mat2[4][4],resultado[4][4],i,j;
    for (i=0;i<4;i++) {
        for (j=0;j<4;j++) {
            printf("Digite o valor para mat1[%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    for (i=0;i<4;i++) {
        for (j=0;j<4;j++) {
            printf("Digite o valor para mat2[%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }
    for (i=0;i<4;i++) {
        for (j=0;j<4;j++) {
            resultado[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    printf("Matriz resultado:\n");
    for (i=0;i<4;i++) {
        for (j=0;j<4;j++) {
            printf("%d ",resultado[i][j]);
        }
        printf("\n");
    }
}
