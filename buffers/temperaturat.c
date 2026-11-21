#include <stdio.h>

int main(void){ 
    float temperaturat[7];
    float shuma = 0;

    // Mbushim bufferin me 7 temperatura
    for(int i = 0; i < 7; i++){ 
        printf("Temperatura per diten %d: ", i + 1);
        scanf("%f", &temperaturat[i]);
        shuma += temperaturat[i];
    }

    // Nisim krahasimin nga matja e pare
    float minimumi = temperaturat[0];
    float maksimumi = temperaturat[0];
    int dita = 0;

    for(int i = 0; i < 7; i++){ 
        printf("Dita %d: %.2f C\n", i + 1, temperaturat[i]);
        if (temperaturat[i] < minimumi) {minimumi = temperaturat[i];}
        if (temperaturat[i] > maksimumi) {maksimumi = temperaturat[i];}
    }

    printf("Mesatarja: %.2f C\n", shuma / 7);
    printf("Minimumi: %.2f C\n", minimumi);
    printf("Maksimumi: %.2f C\n", maksimumi);
    return 0;
}