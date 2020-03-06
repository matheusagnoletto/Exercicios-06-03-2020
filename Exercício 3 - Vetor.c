#include <stdio.h>

int main(){
    int i, j,i_moda = 0, numero[20][2];
    for (i=0;i<20;i++) {
        printf("Digite o %do numero:",i+1);
        scanf("%d",&numero[i][0]);
    }
    for (i=0;i<20;i++) {
        numero[i][1] = 0;
        for (j=0;j<20;j++)
            if (numero[i][0] == numero[j][0]) numero[i][1]++;
    }
    for (i=1;i<20;i++)
        if (numero[i][1] > numero[i_moda][1]) i_moda = i;
    printf("Moda: %d", numero[i_moda][0]);
    return 0;
}