#include <stdio.h>
#include <stdlib.h>

/*--------------------------------------------
    * Opera��es de entrada e sa�da de sados
        * Entrada de dados com "print()"
        * Especificadores de formato
        * Sequ�ncias de escape


    1 - Fun��o printf("") � uma fun��o para imprimir texto no console.

    2 - Especificadores de formato
        {
                d ou i -> n�meros inteiros em base decimal
                X      -> n�meros inteiros em base hexadecimal
                f      -> N�meros em ponto flutuante (com casas decimais)
                e      -> N�meros em nota��o cient�fica(com casas decimais)
                c      -> Caracteres alfanum�ricos (texto)
                s      -> Sequ�ncia de caracteres alfanum�ricos(texto)
                .<num> -> Especifica quantos digitos ser�o impressos ap�s a virgula
        }

    3 - Sequencias de escape

        {
                \a -> n�meros inteiros em base decimal
                \b -> n�meros inteiros em base hexadecimal
                \n -> N�meros em ponto flutuante (com casas decimais)
                \t -> N�meros em nota��o cient�fica(com casas decimais)
                \r -> Caracteres alfanum�ricos (texto)
                \0 -> Sequ�ncia de caracteres alfanum�ricos(texto)
                \v -> Especifica quantos digitos ser�o impressos ap�s a virgula

                \\   -> Caractere \
                \'   -> Caractere '
                \"   -> Caractere "
                \?   -> Caractere ?
                \123 -> Caractere relacionado ao c�digo 123 em octal (ASCII)
                \x12 -> Caractere relacionado ao c�digo 12 em hexadecimal (ASCII)
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
