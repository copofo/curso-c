#include <stdio.h>

/*-------------------------------------

* Operadores lógicos
    * Conjunção("e" lógico): &&
        * É verdade quando tudo for verdade
    * Disjunção("ou" lógico): ||
        * É verdade se ao menos 1 for verdade
    * Inversão(negação - "não lógico"): !
        * É verdade quando o operando é falso


-------------------------------------*/

int main(){
    float m;

    printf("Insira a nota: ");
    scanf("\n%f", &m);

    if(m >= 4.0 && m < 7.0){
        printf("\nTem direito a exame!\n\n");
    } else {
        printf("\nNao tem direto a exame!!!\n\n");
    }
}
