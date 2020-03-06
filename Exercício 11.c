#include <stdio.h>
#include <stdlib.h> 

void inverte(int vetor[], int tamanho) {
    int i,*vetor_t = malloc(sizeof(int) * tamanho);
    for (i=0;i<tamanho;i++) *(vetor_t+(i*sizeof(int))) = vetor[tamanho-(i+1)];
    for (i=0;i<tamanho;i++) vetor[i] = *(vetor_t+(i*sizeof(int)));
}

int main() {
	int vetor[] = {1,2,3,4};
    int i,tamanho = sizeof(vetor) / sizeof(int);
    inverter(vetor,tamanho);
    for (i=0;i<tamanho;i++) printf("%d ",vetor[i]);
    return 0;
}
