#include <stdio.h>
#include <stdlib.h>
/*----------------------------------------------------------------

    * Variáveis
        * Regras de nomenclatura
        * Tipos de dados
            * int,float,double e char
        * Atribuição
        * Constantes

        O que é uma variavel?
        -> Declarar uma variavel é a forma de reservar um espaço
            na memoria do computador para receber um dado.

        * Sintaxe declaração:
            <tipo> <nome>;

    Regras de nomenclatura:
     -> Não pode número 1ª posição
     -> Não pode caracteres especiais
     -> Não pode espaços


    Tipos de dados em linguagem C

    |    Tipo    |   Nº de bits  |   Faixa de representação         |
    -----------------------------------------------------------------
    |   char     |      8        |      -127 a 127                  |
    -----------------------------------------------------------------
    | int (short)|      16       |      -32.768 a 32.767            |
    -----------------------------------------------------------------
    | int (long) |      32       |-2.147.483.648 a 2.147.486.647    |
    -----------------------------------------------------------------
    |   float    |      32       |  3,4 x 10^-38 a 3,4 x 10^38      |
    --------------------------------------------------------------
    |   double   |      64       |  1,7 x 10^-308 a 1,7 x 10^3081   |
    ----------------------------------------------------------------



    Atribuição->
        A atribuição de dados a variaveis é meu pelo sinal de igual =

    Constantes->
        Constante é uma variavel que proteje seu conteudo para não ser alterado
            declaração: #define texto "Entrada e Saída de dados"

------------------------------------------------------------------*/
int main(){
    printf("Aula 3.1\n\n");

    #define texto "Entrada e saida de dados. \n\n"

    printf("%s\n", texto);
    int idade = 0;
    float altura = 0.0;
    char nome[12] = "";

    printf("Digite apenas seu primeiro nome: ");
    scanf("%s", nome);

     printf("\nDigite a idade: ");
    scanf("%d", &idade);

    printf("\nDigite sua altura usando o ponto (.) como separador decimal: ");
    scanf("%f", &altura);


    printf("\nDados informados ->\n\n");


    printf("\n%s" "%s" "%s" "%d" "%s" "%.2f\n\n\n","Seu nome: " , nome , "\nSua idade: ", idade,"\nSua altura: ", altura);

    printf("precione qlqr tecla.");

    getchar();


}
