#include <stdio.h>
#include <string.h>
/*----------------------------------------

* Operadores relacionais
    * Maior >
    * Maior ou igual >=
    * Menor <
    * Menor ou igual <=
    * Igual ==
    * Diferente !=

----------------------------------------*/

int main(){
    printf("\nAula 4.1\n");

    char VF[200] = "";

    int valor, valor2;

    printf("\nDigite um valor: ");
    scanf("%d", &valor);

    printf("\nDigite outro valor: ");
    scanf("%d", &valor2);

    if(valor == valor2){
        strcpy(VF, "\nOs valores sao iguais.\n\n");
    } else{
        strcpy(VF, "\nOS valores são diferentes!\n\n");
    }

    printf("\n%s", VF);
}
