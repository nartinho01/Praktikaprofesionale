#include <stdio.h>

int main(void){ 
    float cmimet[5];
    float cmimi;
    float shuma = 0;
    int count = 0;

    while (count < 5){ 
        printf("Cmimi i produktit (-1 per ndalim): ");
        scanf("%f", &cmimi);
        if(cmimi == -1){ 
            break;
        }

        if(cmimi < 0){ 
            printf("Cmimi nuk mund te jete negativ.\n");
            continue;
        }

        //Ruajme cmimin ne vendin e lire
        cmimet[count] = cmimi;
        count++;
    }

    if (count == 5) printf("Shporta eshte plot!\n");

    for(int i = 0; i < count; i ++){ 
        printf("Produkti %d: %.2f EUR\n", i + 1,cmimet[i]);
        shuma += cmimet[i];
    }

    printf("Shuma: %.2f EUR\n", shuma);
    if (shuma > 50){ 
        //Aplikojme zbritje 10 per qind
        shuma = shuma * 0.90f;
        printf("U aplikua zbritja 10%%.\n");
    }
    printf("Per pagese: %.2f EUR\n", shuma);
    return 0;
}