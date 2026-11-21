#include <stdio.h>
#include <string.h>

struct Vetura{ 
    char marka[30];
    int viti;
    float cmimi;
};

int main(void){ 

    struct Vetura vetura1 = {"AUDI",2020,20000.0};

    printf("Para ndryshimit:\n");
    printf("Emri i vetures: %s, Viti i prodhimit:%d, Qmimi: %.2f euro\n",
           vetura1.marka, vetura1.viti, vetura1.cmimi);
    
    //Ndryshojme te dhenat
    strcpy(vetura1.marka, "BMW");
    vetura1.viti = 2022;
    vetura1.cmimi = 25000.0;

    printf("\nPas ndryshimit:\n");
    printf("Emri i vetures: %s, Viti i prodhimit: %d, Qmimi: %.2f euro\n",
           vetura1.marka, vetura1.viti, vetura1.cmimi);

    return 0;
}
