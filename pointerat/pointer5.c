#include <stdio.h>

int main(){ 
    int volumi = 10;
    int *telekomanda1 = &volumi;
    int *telekomanda2 = &volumi;

    *telekomanda1 = 15;
    printf("%d\n",volumi);

    *telekomanda2 = 30;
    printf("%d\n",volumi);
    return 0;
}