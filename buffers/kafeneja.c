#include <stdio.h>

int main(void){ 
    int porosite[5];
    int count = 0;
    int zgjedhja;

    while (1){ 
        printf("\n1. Shto porosi\n2. Shfaq porosite\n");
        printf("3. Perfundo te gjitha porosite\n0. Dil\nZgjedhja: ");
        scanf("%d", &zgjedhja);

        if (zgjedhja == 0) {break;}

        if (zgjedhja == 1){ 
            if (count == 5){ 
                printf("Buffer-i eshte plot!\n");
            } else { 
                printf("Numri i porosise: ");
                scanf("%d", &porosite[count]);
                count++;
                printf("Porosia u shtua.\n");
            }
        } else if (zgjedhja == 2) { 
            if (count == 0) printf("Nuk ka porosi ne pritje.\n");
            for (int i = 0; i < count; i++) { 
                printf("Porosia %d\n", porosite[i]);
            }
        } else if (zgjedhja == 3) { 
            //Vendet e vjetra tani mund te perdoren perseri
            count = 0;
            printf("Te gjitha porosite pefunduan.\n");
        } else { 
            printf("Zgjedhje e gabuar.\n");
        }
    }
    return 0;
}