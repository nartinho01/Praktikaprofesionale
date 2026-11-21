#include <stdio.h>
#include "funksion3.h"

double sum(double a,double b){ 
    return a + b;
}
double product(double a,double b){ 
    return a * b;
}
double divide(double a,double b){ 
    return a / b;
}
double square(double number){ 
    return number * number;
}
double maximum(double a,double b){ 
    if(a > b){ 
        return a;
    }
    return b;
}
double average(double a,double b){ 
    return (a + b) / 2.0;
}
void evenodd(int a){ 
    if( a % 2 == 0){ 
        printf("Numri eshte qift");
    }
    else{ 
        printf("Numri eshte tek");
    }
}