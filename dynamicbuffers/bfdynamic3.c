#include <stdio.h>
#include <stdlib.h>

int main(void){ 
    int *numrat = NULL;
    int count = 0;
    int vlera;

    while (1) { 
        printf("Shkruaj nje numer (-1 per fund): ");
        scanf("%d", &vlera);

        if (vlera == -1){ 
            break;
        }

        int *iRi = realloc(numrat, (count + 1) * sizeof(int));

        if (iRi == NULL){ 
            free(numrat);
            return 1;
        }

        numrat = iRi;
        numrat[count] = vlera;
        count++;
    }

    printf("\nNumrat e ruajtur: ");
    for (int i = 0; i < count; i++) { 
        printf("%d ", numrat[i]);
    }

    printf("\nGjithsej: %d numra\n", count);

    free(numrat);
    return 0;
}