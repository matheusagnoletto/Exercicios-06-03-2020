#include <stdio.h>
#include <stdlib.h>

void unir(int A[], int B[], int *C[], int tamanho_A, int tamanho_B) {
    int i;
    for (i=0;i<tamanho_A;i++) *(C+(i*sizeof(int))) = A[i];
    for (i=0;i<tamanho_B;i++) *(C+(tamanho_A*sizeof(int))+(i*sizeof(int))) = B[i];
}

int main() {
	int i, A[] = {1,2,3},B[]={4,5};
    int tamanho_A = sizeof(A)/sizeof(int),tamanho_B = sizeof(B)/sizeof(int);
    int *C = malloc(tamanho_A + tamanho_B);
    unir(A,B,C,tamanho_A,tamanho_B);
    for (i=0;i<tamanho_A + tamanho_B;i++) printf("%d ",*(C+(i*sizeof(int))));
    return 0;
}