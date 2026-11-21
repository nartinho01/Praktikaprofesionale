#include <stdio.h>
#include <string.h>

int main(void){ 
    char mesazhi[100];
    int hapesirat = 0;

    printf("Shkruaj njoftimin (deri ne 98 karaktere): ");
    fgets(mesazhi, sizeof(mesazhi), stdin);

    // Largojme Enter-in nga teksti, nese eshte lexuar
    mesazhi[strcspn(mesazhi, "\n")] = '\0';

    //Kalojme neper tekst deri te shenja e fundit
    for(int i = 0; mesazhi[i] != '\0'; i++){
        if (mesazhi[i] == ' '){ 
            hapesirat++;
        }
    }

    printf("Njoftimi i sotem: %s\n", mesazhi);
    printf("Gjatesia: %zu\n", strlen(mesazhi));
    printf("Hapesirat: %d\n", hapesirat);
    return 0;
}