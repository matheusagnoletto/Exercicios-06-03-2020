#include <stdio.h>
#include <stdlib.h> 

float calculamedia(int vetor[], float tamanho) {
    int i;
    float soma = 0;
    for (i=0;i<tamanho;i++) soma += vetor[i];
    return soma/tamanho;
}

int main() {
	int vetor[] = {1,2,3,4};
    int i,tamanho = sizeof(vetor) / sizeof(int);
    printf("Media: %.2f",calculamedia(vetor,tamanho));
    return 0;
}
