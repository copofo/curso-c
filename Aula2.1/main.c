#include <stdio.h>
#include <stdlib.h>

/*--------------------------------------------
    * Operações de entrada e saída de sados
        * Entrada de dados com "print()"
        * Especificadores de formato
        * Sequências de escape


    1 - Função printf("") é uma função para imprimir texto no console.

    2 - Especificadores de formato
        {
                d ou i -> números inteiros em base decimal
                X      -> números inteiros em base hexadecimal
                f      -> Números em ponto flutuante (com casas decimais)
                e      -> Números em notação científica(com casas decimais)
                c      -> Caracteres alfanuméricos (texto)
                s      -> Sequência de caracteres alfanuméricos(texto)
                .<num> -> Especifica quantos digitos serão impressos após a virgula
        }

    3 - Sequencias de escape

        {
                \a -> números inteiros em base decimal
                \b -> números inteiros em base hexadecimal
                \n -> Números em ponto flutuante (com casas decimais)
                \t -> Números em notação científica(com casas decimais)
                \r -> Caracteres alfanuméricos (texto)
                \0 -> Sequência de caracteres alfanuméricos(texto)
                \v -> Especifica quantos digitos serão impressos após a virgula

                \\   -> Caractere \
                \'   -> Caractere '
                \"   -> Caractere "
                \?   -> Caractere ?
                \123 -> Caractere relacionado ao código 123 em octal (ASCII)
                \x12 -> Caractere relacionado ao código 12 em hexadecimal (ASCII)
                %%   -> Caractere %
        }

--------------------------------------------*/


int main(){
    printf("\n---------------------------------\n");
    printf("Aula 2.1\n");
    printf("---------------------------------\n");

    printf("Oi, tudo bem? Tenho 6 anos e programo.\n");
    printf("Valor inteiro: %d.\n", 10);
    printf("Valor real: %f.\n", 3.14159265);
    printf("Valor real com apenas duas casas: %.2f.\n", 3.14159265);
    printf("Dado de texto: %c.\n", 'a');
    printf("Dado de texto: %s.\n", "testando");


    printf("Precione uma tecla para finalizar.\n");

}
