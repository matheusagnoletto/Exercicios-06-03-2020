#include <stdio.h>

float media(int vetor[]) {
    int i;
    float soma;
    for (i=0;i<30;i++) soma += vetor[i];
    return soma/30;
}

int main() {
	int vetor[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
    printf("Media: %.2f",media(vetor));
    return 0;
}