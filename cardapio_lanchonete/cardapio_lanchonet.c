#include<stdio.h>
#include<stdlib.h>

#define _CACHORRO_QUENTE 4.2
#define _BAURU_SIMPLES 3.3
#define _BAURU_OVO 5.5
#define _HAMBURGUER 6.2
#define _CHEESEBURGUER 5.3
#define _REFRIGERANTE 4.5

int main(){
    int codigo_produto, quantidade_produto;
    float valor_para_pagar;
    char opcao, limpar_buffer;
    do
    {
        printf("==============================================================\n");
        printf("|LANCHONETE - LANCHEBEM                                      |\n");
        printf("==============================================================\n");
        printf("|Especificação | Código    | Preço                           |\n");
        printf("==============================================================\n");
        printf("|Cachorro      | 100       | 4,2                             |\n");
        printf("|Quente        |           |                                 |\n");
        printf("==============================================================\n");
        printf("|Bauru Simples | 101       | 3,3                             |\n");
        printf("==============================================================\n");
        printf("|Bauru com ovo | 102       | 5,5                             |\n");
        printf("==============================================================\n");
        printf("|Hambúrguer    | 103       | 6,2                             |\n");
        printf("==============================================================\n");
        printf("|Cheeseburguer | 104       | 5,3                             |\n");
        printf("==============================================================\n");
        printf("|Refrigerante  | 105       | 4,5                             |\n");
        printf("==============================================================\n");
        
        printf("Digite o código do produto ao qual você deseja: ");
        scanf("%i", &codigo_produto);
        printf("Digite a quantidade do produto que você quer: ");
        scanf("%i", &quantidade_produto);
        switch (codigo_produto)
        {
            case 100:
                valor_para_pagar = quantidade_produto * _CACHORRO_QUENTE;
                printf("Especificação:.....................Cachorro Quente\n");
                printf("Código:............................%i\n", codigo_produto);
                printf("Quantidade solicitada:.............%i\n", quantidade_produto);
                printf("Valor unitário:....................%.2f\n", _CACHORRO_QUENTE);
                printf("Valor total:.......................%.2f\n", valor_para_pagar);
                break;

            case 101:
                valor_para_pagar = quantidade_produto * _BAURU_SIMPLES;
                printf("Especificação:.....................Bauru Simples\n");
                printf("Código:............................%i\n", codigo_produto);
                printf("Quantidade solicitada:.............%i\n", quantidade_produto);
                printf("Valor unitário:....................%.2f\n", _BAURU_SIMPLES);
                printf("Valor total:.......................%.2f\n", valor_para_pagar);
                break;
            case 102:
                valor_para_pagar = quantidade_produto * _BAURU_OVO;
                printf("Especificação:.....................Bauru com ovo\n");
                printf("Código:............................%i\n", codigo_produto);
                printf("Quantidade solicitada:.............%i\n", quantidade_produto);
                printf("Valor unitário:....................%.2f\n", _BAURU_OVO);
                printf("Valor total:.......................%.2f\n", valor_para_pagar);
                break;
            case 103:
                valor_para_pagar = quantidade_produto * _HAMBURGUER;
                printf("Especificação:.....................Hambúrguer\n");
                printf("Código:............................%i\n", codigo_produto);
                printf("Quantidade solicitada:.............%i\n", quantidade_produto);
                printf("Valor unitário:....................%.2f\n", _HAMBURGUER);
                printf("Valor total:.......................%.2f\n", valor_para_pagar);
                break;
            case 104:
                valor_para_pagar = quantidade_produto * _CHEESEBURGUER;
                printf("Especificação:.....................Cheeseburguer\n");
                printf("Código:............................%i\n", codigo_produto);
                printf("Quantidade solicitada:.............%i\n", quantidade_produto);
                printf("Valor unitário:....................%.2f\n", _CHEESEBURGUER);
                printf("Valor total:.......................%.2f\n", valor_para_pagar);
                break;
            case 105:
                valor_para_pagar = quantidade_produto * _REFRIGERANTE;
                printf("Especificação:.....................Refrigerante\n");
                printf("Código:............................%i\n", codigo_produto);
                printf("Quantidade solicitada:.............%i\n", quantidade_produto);
                printf("Valor unitário:....................%.2f\n", _REFRIGERANTE);
                printf("Valor total:.......................%.2f\n", valor_para_pagar);
                break;
            default:
                printf("Código não encontrado!\n");
                break;
        }
        
        /*Limpando o buffer do teclado*/
        while((limpar_buffer = getchar()) != '\n' && limpar_buffer == EOF);
        
        printf("Deseja refazer o pedido?\nS-Sim\nN-Não\n");
        scanf("%c", &opcao);
        
    } while (opcao == 'S' || opcao == 's');
    
    

    return 0;
}
