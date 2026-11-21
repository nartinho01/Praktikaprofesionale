#include <stdio.h>

void minMax(int a, int b, int c, int *min, int *max){ 
    *min =a; *max = a;
    if (b < *min){ 
        *min = b;
    }
    if (c < *min){ 
        *min = c;
    }
    if (b > *min){ 
        *max = b;
    }
    if (c > *min){ 
        *max = c;
    }
}


int main(){ 
    int nota1;
    int nota2;
    int nota3;
    printf("Shenoni noten e pare: ");
    scanf("%d", &nota1);

    printf("\nShenoni noten e dyte: ");
    scanf("%d", &nota2);

    printf("\nShenoni noten e trete: ");
    scanf("%d", &nota3);
    int ulet;
    int larte;
    minMax(nota1,nota2,nota3, &ulet, &larte);
    printf("Nota me e ulet: %d, me e larte: %d\n",ulet,larte);
    return 0;
}