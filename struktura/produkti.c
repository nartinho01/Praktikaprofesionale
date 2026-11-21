#include <stdio.h>

struct Produkt { 
    char emri[30];
    float cmimi;
};

int main(){ 
    struct Produkt p;
    
    printf("Shkruaj emrin e produktit: ");
    scanf("%29s", p.emri);

    printf("Shkruaj cmimin: ");
    scanf("%f", &p.cmimi);

    printf("Produkti: %s, Cmimi: %.2f EUR\n", p.emri, p.cmimi);
    return 0;
}