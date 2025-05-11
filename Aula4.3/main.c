#include <stdio.h>

/*--------------------------------

* Comando switch-case:
    * É como se fossem vários if em sequência
    * Útil para comparar uma única variável
    * Somente comparações de igualdade
* Caso seja igual a 1 dos valores:
    * Executa o respectivo bloco
    * Ignora todos os outros blocos




--------------------------------*/

int main(){
    printf("\nAula 4.3\n");
    int d;
    printf("Digite um numero de 1 a 7 para ver o dia da semana relacionado: ");
    scanf("%d", &d);

    switch(d){
        case 1:
            printf("\nDomingo\n");
            break;
        case 2:
            printf("\nSegunda-Feira\n");
            break;
        case 3:
            printf("\nTerça-Feira\n");
            break;
        case 4:
            printf("\nQuarta-Feira\n");
            break;
        case 5:
            printf("\nQuinta-Feira\n");
            break;
        case 6:
            printf("\nSexta-Feira\n");
            break;
        case 7:
            printf("\nSábado\n");
            break;
        default:
            printf("\nOpcao invalida!\n");
            break;
    }

}

