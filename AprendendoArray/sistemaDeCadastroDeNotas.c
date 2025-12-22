#include <stdio.h>

struct nota
{
    float not;
    char nome[50];
};

int main()
{
    int alunos, opcao, i = 0, j, continuar = 0;

    printf("\nQuantos alunos sao:\n");
    scanf("%d", &alunos);

    struct nota notas[alunos];

    do
    {
        printf("\nBom dia seja bem vindo ao sistema de notas!!");
        printf("\n(1) Cadastrar a nota de um aluno");
        printf("\n(2) Olhar as notas ja cadastradas");
        printf("\n(3) Sair\n");

        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            if (i >= alunos) {
                printf("\nLimite de alunos atingido!\n");
                break;
            }

            printf("\nNome do aluno:\n");
            scanf(" %s", notas[i].nome);

            printf("\nNota do aluno:\n");
            scanf("%f", &notas[i].not);

            printf("\nCadastro completo\n");
            i++;
            break;

        case 2:
            for (j = 0; j < i; j++)
            {
                printf("\nAluno %d", j + 1);
                printf("\nNome: %s", notas[j].nome);
                printf("\nNota: %.2f\n", notas[j].not);
            }
            break;

        case 3:
            printf("\nTem certeza que deseja sair?\n(1) Sim  (2) Nao\n");
            scanf("%d", &continuar);
            break;

        default:
            printf("\nOpcao invalida.\n");
        }

    } while (continuar != 1);

    return 0;
}
/*bug chato q toda vez q eu vou cadastrar ao inves de voltar o menu pra eu escolher uma opção dnv ele ja vai direto cadastrar outro

*/