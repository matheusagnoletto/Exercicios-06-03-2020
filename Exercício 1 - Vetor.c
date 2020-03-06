#include <stdio.h>

int main(){
    int i, numero[15];
    for (i=0;i<15;i++){
        printf("Digite o %do numero:",i+1);
        scanf("%d",&numero[i]);
    }
    for (i=0;i<15;i++) 
        if (numero[i]%2 == 0) printf("%d - Par\n",numero[i]);
        else printf("%d - Impar\n",numero[i]);
    return 0;
}