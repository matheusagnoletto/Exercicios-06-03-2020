#include <stdio.h>

void maiorEntre(int n1, int n2) {
    printf("%d", (n1 > n2) ? n1 : n2);
}

int main() {
    maiorEntre(52,10);
    return 0;
}
