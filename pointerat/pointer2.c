#include <stdio.h>

void ndajKohen(int *totali, int *day,int *h,int *min,int *sek){ 
    *day = *totali /(3600 * 24);
    *h = (*totali / 3600) % 24;
    *min = (*totali / 60) % 60;
    *sek = *totali % 60;
}

int main(){ 
    int kenga = 21535687;
    int dita;
    int ora;
    int m;
    int s;
    ndajKohen(&kenga,&dita,&ora,&m,&s);
    printf("Kenga zgjat %d dite, %d ore, %02d minuta, %02d sekonda\n",dita,ora,m,s);
    return 0;
}