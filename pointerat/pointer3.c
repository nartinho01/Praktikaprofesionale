#include <stdio.h>

void ndaj(int karamele,int shoke,int *secili, int *mbeten){ 
    *secili = karamele / shoke;
    *mbeten = karamele % shoke;
}

int main(){ 
    int shoket;
    int karamelet;
    printf("Sa shoke jeni: \n");
    scanf("%d", &shoket);

    printf("Sa karamele i keni: \n");
    scanf("%d",&karamelet);

    int secili;
    int mbeten;

    ndaj(karamelet,shoket,&secili,&mbeten);
    printf("Secili merr %d, mbeten %d\n", secili,mbeten);

    ndaj(karamelet,shoket,&secili,&mbeten);
    printf("Secili shok merr %d karamele dhe mu me mbeten %d karamele",secili,mbeten);

    return 0;
}