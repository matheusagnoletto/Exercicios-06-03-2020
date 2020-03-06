#include <stdio.h>


float calcula_media_ponderada(float n1,float n2,float n3, int p1, int p2, int p3) {
    return ((n1 * p1) + (n2 * p2) + (n3 * p3)) / (p1 + p2 + p3);
}

int main() {
    float media = calcula_media_ponderada(5,2,3,2,1,3);
    printf("Media: %.2f",media);
    return 0;
}
