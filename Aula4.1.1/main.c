#include <stdio.h>

/*-------------------------------------

* Operadores l�gicos
    * Conjun��o("e" l�gico): &&
        * � verdade quando tudo for verdade
    * Disjun��o("ou" l�gico): ||
        * � verdade se ao menos 1 for verdade
    * Invers�o(nega��o - "n�o l�gico"): !
        * � verdade quando o operando � falso


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
