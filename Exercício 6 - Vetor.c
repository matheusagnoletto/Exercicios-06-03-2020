#include <stdio.h>
#include <stdlib.h>

void removerRedundancias(int vetor[]) {
    int i,j,tamanho_unico=1;
    int *vetor_unico = malloc(10 * sizeof(int));
    *vetor_unico = vetor[0];
    for (i=1;i<10;i++) {
        int unico = 1;
        for (j=0;j<tamanho_unico;j++) 
            if (vetor[i] == *(vetor_unico+(j*sizeof(int)))) unico = 0;
        if (unico != 0) {
            *(vetor_unico+(tamanho_unico*sizeof(int))) = vetor[i];
            tamanho_unico++;
        }
    }
    printf("\nVetor sem redundancias: ");
    for (i=0;i<tamanho_unico;i++) printf("%d ",*(vetor_unico+(i*sizeof(int))));
}

int main() {
	int i,vetor[10];
    for (i=0;i<10;i++) { printf("Digite o %d elemento: ",i+1); scanf("%d",&vetor[i]); }
    removerRedundancias(vetor);
    return 0;
}