#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*CriaC'C#o da Matriz:
Crie uma para armazenar as informaC'C5es dos produtos:
ID do produto (inteiro).
Quantidade em estoque (inteiro).
PreC'o do produto (float).*/


float vetor[10]; // vetor De PreC'o (10)
int matriz[10][2]; // Matriz De ID e Qtd(10x2)
int i=0,j=0;
int op,id;
int qtdv; //quantidade vendida;
int valtotal=0; //Valor total da venda;


int main()
{
	setlocale(LC_ALL,"portuguese");

	for(i=0; i<10; i++) {
		printf("Digite o ID do Produto: ");
		scanf("%d",&matriz[i][0]);
		printf("Digite a Quantidade de Produtos: ");
		scanf("%d",&matriz[i][1]);
	}
	printf("\nDigite o Valor dos Produtos: \n");
	for(i=0; i<10; i++) {
		printf("Produto ID:%d QTD:%d Valor: ",matriz[i][0],matriz[i][1] );
		scanf("%f",&vetor[i]);
	}
	do {
		printf("\n");
		printf("Menu De Opções: \n 1 - Exibir Produtos \n 2 - Vender Produtos \n 0 - Sair \n\n Digite a opC'C#o desejada: ");
		scanf("%d",&op);
		switch(op) {
		case 1:
			for(i=0; i<10; i++) {
				for(j=0; j<1; j++) {
					printf("ID: %d",matriz[i][0]);
					if(matriz[i][1]<3) {
						printf("| QTD: Estoque Baixo");
					}
					else {
						printf("| QTD: %d",matriz[i][1]);
					}
					printf("| Valor: %f\n",vetor[i]);
				}
			}
			break;
		///////////////////////////////////////////////////////////////
		case 2:
			printf("Digite o ID do produto a ser vendido: ");
			scanf("%d",&id);
			printf("Digite a quantidade a ser vendida: ");
			scanf("%d",&qtdv);
			for(i=0; i<10; i++) {
				if(id==matriz[i][0]) {
					matriz[i][1]-=qtdv;
					valtotal+=matriz[i][1];
					valtotal*=vetor[i];
					printf("Venda realizada: Valor total: R$%d\n",valtotal);
					printf("Quantidade Restante Do Produto %d: %d\n",matriz[i][0],matriz[i][1]);
					
					if(matriz[i][1]=0) {
						printf("Estoque Baixo.");
						break;
					}
					
				}
			}
			break;
		///////////////////////////////////////////////////////////////////
		case 0:
			printf("Saindo..");
			break;
		default:
			printf("Valor invalido.");
		}
	} while(op!=0);
}


