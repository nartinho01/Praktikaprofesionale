#include <stdio.h>

int main(){ 
    int dhoma1 = 20;
    int dhoma2 = 25; //temperatura
    int *kamera = &dhoma1;

    printf("Kamera tregon: %d\n", *kamera);
    kamera = &dhoma2;               //kamera kthehet nga dhoma tjeter
    printf("Kamera tregon: %d\n", *kamera);
    *kamera = 22;                   //ndezim ftohjen ne dhomen 2
    printf("dhoma1 = %d, dhoma2 = %d\n", dhoma1, dhoma2);
    return 0;
}