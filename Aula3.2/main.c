#include <stdio.h>
/*-----------------------------------------------------------

* Operadores aritméticos
    * Operadores matemáticos
        * Soma: +
        * Subtração: -
        * Multiplicação: *
        * Divisão: /
        * Resto da divisão inteira: %

* Existe precidência entre operadores!

* Operadores de atribuição aritmética
    * Incremento em 1 unidade: ++
    * Decremento em 1 unidade: --
    * Incremento genérico: +=
    * Decremento genérico: -=
    * Atribuição com multiplicação: *=
    * Atribuição com divisão: /=







-----------------------------------------------------------*/
int main(){

    /*
    printf("Aula 3.2\n");

    int A, B, soma, subtr, mult;
    float divis;

    printf("Digite o primeiro favor do calculo: ");
    scanf("%d", &A);

    printf("\nDigite o segundo Valor: ");
    scanf("%d", &B);

    soma = A + B;
    subtr = A - B;
    mult = A * B;
    divis = A / B;

    printf("\n%d\n" "%d\n" "%d\n" "%.2f", soma, subtr, mult, divis);

    */

    int dado = 10;

    printf("\nDado antes do incremento: %d ", dado);

     dado++;
     printf("\nDepois do incremento: %d ", dado);

     dado--;
     printf("\nDepois do decremento: %d ", dado);

     dado += 3;
     printf("\nDepois do incremento em 3 unidades: %d ", dado);

     dado -= 2;
     printf("\nDepois do decremento em 2 unidades: %d", dado);

     dado *= 10;
     printf("\nDepois de multiplicar por 10: %d", dado);

     dado /= 2;
     printf("\nDepois de dividir por 2: %d\n\n\n", dado);
}
