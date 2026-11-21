#include <stdio.h>

struct Nxenesi{// struktura me te dhenat e deklaruara
    char emri[30];
    int mosha;
    float nota;
};

int main(){
    
    struct Nxenesi nxenesi1 = {"Arta",16,4.5};//dhenia e vlerave te te dhenave

    printf("Emri: %s\n", nxenesi1.emri);//thirrja e te dhenave te struktures
    printf("Mosha: %d\n", nxenesi1.mosha);
    printf("Nota: %.1f\n", nxenesi1.nota);

    return 0;
}