#include <stdio.h>
#include <stdlib.h>

// Constantes

#define n 50
int main()
{



    //Linguagem C - Aula 6.2 - Strings: trabalhando com dados de texto em C (2022)

    /*---------------------------------------------------------------

            *Sintaxe aprimorada do scanf e o comando fflush(stdin)

                scanf("%<tam.-1>[^\n]s", <str>);

            * função gets()
                gets(<vetor-de-char>);


            * Função fgets()
                * Último caractere sempre fica reservado ao '\0'
                * Entrada padrão: stdin
                * Sintaxe:
                fgets(<vetor-de-char>, tamanho, stdin);


            * Saída de dados:

                puts()
                    * Imprimi uma string diretamente na tela.
                    * Não permite variáveis de outros tipos.
                    * Sintaxe:
                        puts(<vetor-de-char>);
                    * fflush(stdin): chamar sempre depois de uma entrada.




            * Biblioteca string.h

                * strcpy(<destino>, <origem>);
                    * Usado para alterar o conteudo de uma string

                * strcat(<destino>, <origem>);
                    * Usado para concatenar strings

                * strlen (<string>);
                    * usado para ver o tamanho de uma string

                * strcmp(<string1>, <string2>);
                    * Compara igualdade entre strings

            * Biblioteca locale.h
                * setlocale(LC_ALL,"Portuguese");


















    ---------------------------------------------------------------*/

    char s[n];


    printf("Digite algo (scan aprimorado):\n\n\n");

    //scanf("%49[^\n]s", s);
    fgets(s,49,stdin);
    fflush(stdin);

    //printf("\n\nResultado: %s\n\n", s);
    puts(s);

    return 0;
}
