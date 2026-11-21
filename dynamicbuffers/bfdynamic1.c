#include <stdio.h>
#include <stdlib.h>

int main(void){ 
    int numri;
    int *notat;

    printf("Sa nota do te regjistrosh? ");
    scanf("%d", &numri);

    if (numri <= 0){ 
        return 0;
    }

    notat = malloc(numri * sizeof(int));

    if (notat == NULL){ 
        printf("Nuk ka memorie te mjaftueshme.\n");
        return 1;
    }

    for (int i = 0; i < numri; i++){ 
        printf("Nota %d: ", i + 1);
        scanf("%d", &notat[i]);
    }

    printf("Notat: ");
    for (int i = 0; i < numri; i++){ 
        printf("%d ", notat[i]);
    }

    free(notat);
    return 0;
}