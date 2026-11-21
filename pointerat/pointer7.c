#include <stdio.h>

void nderroVendet(int *a,int *b){ 
    int banka = *a;
    *a = *b;
    *b = banka;
}


int main(){ 
    int arta = 1;
    int blerimi = 2;  //numri bankes
    nderroVendet(&arta,&blerimi);
    printf("Arta ne banken %d, Blerimi ne banken %d\n",arta,blerimi);
    return 0;
}