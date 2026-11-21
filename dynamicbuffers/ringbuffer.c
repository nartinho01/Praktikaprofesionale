#include <stdio.h>

#define SIZE 5

int main(){ 
    int buffer[SIZE];
    int pozita = 0; //Vendi ku do te shkruhet numri i radhes
    int count = 0; //Sa numra jane aktualisht ne buffer

    for (int numri = 1; numri <= 7; numri++){ 
        buffer[pozita] = numri;
        pozita = (pozita + 1) % SIZE;

        if (count < SIZE){ 
            count++;
        }
    }

    printf("Numrat ne buffer:\n");

    for (int i = 0; i < count; i++) { 
        int indeksi = (pozita - count + i + SIZE) % SIZE;
        printf("%d ", buffer[indeksi]);
    }

    return 0;
}