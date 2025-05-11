#include <stdio.h>
#include <stdlib.h>


// Entrada de dados

// scanf(<form.>, &<v1>, &<v2>, &<v3> &<vN>);

// scanf() -> Tem os mesmos especificadores de printf com com a exceção do [^chars]
// [^chars] -> Lê todos os dados digitados, exceto os especificados em "chars"

int main(){
    printf("Aula 2.2\n");

    int idade = 0;

    printf("Valor inicial da idade: %d\n", idade);
    printf("Digite uma idade: ");
    scanf("%d", &idade);
    printf("Idade informada: %d\n", idade);

    printf("Aperte qualquer teclado para finalizar.\n");
    getchar();
}
