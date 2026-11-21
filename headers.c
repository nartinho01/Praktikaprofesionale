#include <stdio.h>
#include "funksionet/funksion.h"
#include "funksionet/prodhimi.h"
#include "funksionet/funksion3.h"


int main(){
    printf("Shuma e funksionit eshte %d", shuma(8,10));
    printf("\n");

    int a;
    int b;
    printf("Sheno numrin e pare: ");
    scanf("%d", &a);

    printf("\nSheno numrin e dyte: ");
    scanf("%d", &b);

    printf("\nProdhimi i numrave %d me %d eshte %d",a,b,prodhimi(a,b));
    
    double nr1 = 5.0;
    double nr2 = 6.0;
    printf("\nShuma e funksionit eshte: %.2lf",sum(nr1,nr2));
    printf("\nProdhimi i funksionit eshte: %.2lf",product(nr1,nr2));
    printf("\nPjestimi i funksionit eshte: %.2lf",divide(nr1,nr2));
    printf("\nFuqia e numrit eshte: %.2lf",square(nr1));
    printf("\nMaksimumi i funksionit eshte: %.2lf",maximum(nr1,nr2));
    printf("\nMesatarja e funksionit eshte: %.2lf\n",average(nr1,nr2));
    evenodd(nr1);
    return 0;
}