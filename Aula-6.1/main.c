#include <stdio.h>

int main(){

    printf("\n---------------------------------------------------------------------------------------------------------------------\n");

    //Arrays
    int nuns[5];
    int soma;

    int tamanho = sizeof(nuns) / sizeof(nuns[0]);

    printf("\nMe ajude escolhendo cinco numeros.\n");

    for(int i = 0; i <= tamanho-1; i++){



        switch(i){
            case 0:
                printf("\nDigite o primeiro numero:\n");
                break;
            case 1:
                printf("\nDigite o segundo numero:\n");
                break;
            case 2:
                printf("\nDigite o terceiro numero:\n");
                break;
            case 3:
                printf("\nDigite o quarro numero:\n");
                break;
            case 4:
                printf("\nDigite 0 quinto e ultimo numero:\n");
                break;
        }

        scanf("%d", &nuns[i]);
    }

    printf("\nResultados: \n");

    for(int c = 0; c <= tamanho-1; c++){

        soma += nuns[c];

    }
        int media = soma / tamanho;
        printf("\nSoma: %d", soma);
        printf("\nMedia: %d", media);

    printf("\n---------------------------------------------------------------------------------------------------------------------\n\n\n");

}
