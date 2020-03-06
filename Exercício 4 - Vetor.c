#include <stdio.h>

void ordenar(int vetor[], int i) {
    int aux;
    if (i < 40) {
        if (vetor[i] > vetor[i+1]) { 
            aux = vetor[i+1]; 
            vetor[i+1] = vetor[i]; 
            vetor[i] = aux;  
            if (i>0) ordenar(vetor,i-1);
        }
        ordenar(vetor,i+1);
    }
}

int main() {
	int i,vetor[40];
    for (i=0;i<40;i++) { printf("Digite o %d elemento: ",i+1); scanf("%d",&vetor[i]); }
    ordenar(vetor,0);
    for (i=0;i<40;i++) printf("%d ",vetor[i]);
    return 0;
}