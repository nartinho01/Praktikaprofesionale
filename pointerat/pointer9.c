#include <stdio.h>

void sum(int a ,int b, int *shuma){ 
    *shuma = a + b;
}

void prod(int a ,int b, int *prodhimi){ 
    *prodhimi = a * b;
}


int main(){ 
    int nr1;
    int nr2;
    int shuma;
    int prodhimi;

    printf("Sheno numrin e pare: ");
    scanf("%d", &nr1);

    printf("\nSheno numrin e dyte: ");
    scanf("%d", &nr2);

    sum(nr1,nr2, &shuma);
    prod(nr1,nr2, &prodhimi);

    printf("\n Shuma e numrit %d me numrin %d eshte: %d",nr1,nr2,shuma);
    printf("\n Prodhimi i numrit %d me numrin %d eshte: %d",nr1,nr2,prodhimi);
}