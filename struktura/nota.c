#include <stdio.h>

struct Nxenesi {
    char emri[30];
    int nota;
};

int main(void){ 

    struct Nxenesi nxenesit[4] = {
        {"Arta", 5},
        {"Blerimi", 3},
        {"Drita", 4},
        {"Erion", 2},
    };
    
    printf("Nxenesit me note 4 ose 5:\n");

    for(int i = 0; i < 4; i++){ 

        //Kontrollojme noten e secilit nxenes
        if(nxenesit[i].nota >= 4){ 
            printf("%s - Nota: %d\n",
                   nxenesit[i].emri, nxenesit[i].nota);
        }
    }

    return 0;
}
