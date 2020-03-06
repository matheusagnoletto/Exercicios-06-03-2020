#include <stdio.h>


void calcula_media_ponderada (float n1,float n2,float n3, int p1, int p2, int p3) {
    float media = ((n1 * p1) + (n2 * p2) + (n3 * p3)) / (p1 + p2 + p3);
    printf("Resultado: %.2f", media);
}

int main() {
    calcula_media_ponderada(8,3,7,6,2,1);
    return 0;
}
