#include <stdio.h>
#include <stdlib.h>
/*----------------------------------------------------------------

    * Vari�veis
        * Regras de nomenclatura
        * Tipos de dados
            * int,float,double e char
        * Atribui��o
        * Constantes

        O que � uma variavel?
        -> Declarar uma variavel � a forma de reservar um espa�o
            na memoria do computador para receber um dado.

        * Sintaxe declara��o:
            <tipo> <nome>;

    Regras de nomenclatura:
     -> N�o pode n�mero 1� posi��o
     -> N�o pode caracteres especiais
     -> N�o pode espa�os


    Tipos de dados em linguagem C

    |    Tipo    |   N� de bits  |   Faixa de representa��o         |
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



    Atribui��o->
        A atribui��o de dados a variaveis � meu pelo sinal de igual =

    Constantes->
        Constante � uma variavel que proteje seu conteudo para n�o ser alterado
            declara��o: #define texto "Entrada e Sa�da de dados"

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
