#include <stdio.h>
#include <string.h>

struct Nxenesi {
    char emri[30];
    int mosha;
    int nota;
};

int main(void){ 

    struct Nxenesi nxenesi1 = {"Arta", 16, 3};

    struct  Nxenesi *ptr = &nxenesi1;

    printf("Emri: %s\n", ptr->emri);
    printf("Mosha: %d\n", ptr->mosha);
    printf("Nota fillestare: %d\n", ptr->nota);

    strcpy(ptr->emri, "Petrit");
    ptr->nota = 5;
    ptr->mosha = 22;

    printf("Emri i ri: %s\n", nxenesi1.emri);
    printf("Nota e re: %d\n", nxenesi1.nota);
    printf("Mosha e re: %d\n", nxenesi1.mosha);

    return 0;
}
