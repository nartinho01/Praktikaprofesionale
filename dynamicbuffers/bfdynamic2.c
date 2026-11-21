#include <stdio.h>
#include <stdlib.h>

int main(void){ 
    int numri;
    int kapaciteti = 2;
    float *shpenzimet = malloc(kapaciteti * sizeof(float));

    if(shpenzimet == NULL){ 
        return 1;
    }

    printf("Sa shpenzime do te regjistrosh? ");
    scanf("%d", &numri);

    if(numri <= 0) { 
        free(shpenzimet);
        return 0;
    }

    if (numri > kapaciteti) { 
        float *iRi = realloc(shpenzimet, numri * sizeof(float));

        if (iRi == NULL){ 
            free(shpenzimet);
            return 1;
        }

        shpenzimet = iRi;
        kapaciteti = numri;
    }

    float totali = 0;

    for (int i = 0; i < numri; i++){ 
        printf("Shpenzimi %d ne euro: ", i + 1);
        scanf("%f", &shpenzimet[i]);
        totali += shpenzimet[i];
    }

    printf("Totali: %.2f euro\n", totali);
    printf("Kapaciteti i bufferit: %d shpenzime\n", kapaciteti);

    free(shpenzimet);
    return 0;
}