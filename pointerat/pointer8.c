#include <stdio.h>

int terhiq(int *bilanci, int shuma){ 
    if(shuma > *bilanci){ 
        return 0;               //nuk ka mjaftueshem
    }
    *bilanci = *bilanci - shuma;
    return 1;                   //u terhoq
}


int main(){ 
    int llogaria = 50;
    if (terhiq(&llogaria, 20)){ 
        printf("U terhoqen 20. Mbeten %d\n",llogaria);
    }
    if (!terhiq(&llogaria, 40)){ 
        printf("Nuk ke 40. Ke vetem %d\n",llogaria);
    }
    return 0;
}