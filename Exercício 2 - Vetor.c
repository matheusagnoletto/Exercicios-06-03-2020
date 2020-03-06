#include <stdio.h>

int main(){
    int i, maior, numero[] = {0,1,2,3,4,5,6,7,8,9};
    maior = numero[0];
    for (i=1;i<10;i++){
        if (numero[i] > maior) maior = numero[i];
    }    
    printf("Maior numero do vetor: %d",maior);
    return 0;
}