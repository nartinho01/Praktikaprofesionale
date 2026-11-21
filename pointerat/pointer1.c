#include <stdio.h>

void gol(int *golat){ 
    *golat = *golat + 1;
}

int main() { 
    int kosova = 0;
    int zvicra = 0;
    gol(&kosova);
    gol(&zvicra);
    gol(&kosova);
    printf("Kosova %d - %d Zvicra\n", kosova, zvicra);
    return 0;
}