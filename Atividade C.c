#include<stdio.h>
#include<string.h>
#include<locale.h>

#define MAX_ALUNOS 10

char nomes[MAX_ALUNOS][50];
float notas[MAX_ALUNOS][3];

int total_alunos=0;

void addAluno();
void Media();
void Alunos();
void MaiorMedia();
void menu();

int main(){
    setlocale(LC_ALL,"Portuguese");
    int opcao;
    do{
        menu();
        printf("Escolha uma opção: ");
        scanf("%d",&opcao);
        
        switch(opcao){
            case 1:
                addAluno();
                break;
            case 2:
                Media();
                break;
            case 3:
                Alunos();
                break;
            case 4:
                MaiorMedia();
                break;
            case 5:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    }while(opcao!=5);
}
void menu(){
    printf("\n--- Menu Principal ---\n");
    printf("1. Adicionar aluno e notas\n");
    printf("2. Calcular e exibir a média de cada aluno\n");
    printf("3. Exibir todos os alunos\n");
    printf("4. Exibir o aluno com maior média\n");
    printf("5. Sair\n");
}
void addAluno(){
    if(total_alunos>=MAX_ALUNOS){
        printf("Limite máximo de alunos atingido.\n");
        return;
    }
    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]",nomes[total_alunos]);
    for(int i=0;i<3;i++){
        printf("Digite a nota %d: ",i+1);
        scanf("%f",&notas[total_alunos][i]);
    }
    total_alunos++;
    printf("Aluno adicionado com sucesso!\n");
}
void Media(){
    printf("\nMédias dos alunos:\n");
    for(int i=0;i<total_alunos;i++){
        float soma=0;
        for(int j=0;j<3;j++){
            soma+=notas[i][j];
        }
        float media=soma/3;
        printf("Nome: %s, Média: %.2f\n",nomes[i],media);
    }
}
void Alunos(){
    printf("\nInformações dos alunos:\n");
    for(int i=0;i<total_alunos;i++){
        printf("Nome: %s, Notas: %.2f, %.2f, %.2f\n",nomes[i],notas[i][0],notas[i][1],notas[i][2]);
    }
}
void MaiorMedia(){
    if(total_alunos==0){
        printf("Nenhum aluno cadastrado.\n");
        return;
    }
    int indice_maior=0;
    float maior_media=0;
    for(int i=0;i<total_alunos;i++){
        float soma=0;
        for(int j=0;j<3;j++){
            soma+=notas[i][j];
        }
        float media=soma/3;
        if(media>maior_media){
            maior_media=media;
            indice_maior=i;
        }
    }
    printf("\nAluno com maior média:\n");
    printf("Nome: %s, Média: %.2f\n",nomes[indice_maior],maior_media);
}