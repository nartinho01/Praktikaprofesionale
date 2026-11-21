#include <stdio.h>

struct  Produkt {
    char emri[20];
    float cmimi;
    int sasia;
};
 
int main(void) { 
    
    struct Produkt produkti = {"Tastiere",25.0,3};

    //Cmimi per cope shumezuar me sasine
    float totali = produkti.cmimi * produkti.sasia;

    printf("Produkti: %s\n", produkti.emri);
    printf("Cmimi: %.2f euro\n", produkti.cmimi);
    printf("Sasia: %d cope\n", produkti.sasia);
    printf("Totali: %.2f euro\n", totali);

    return 0;
}