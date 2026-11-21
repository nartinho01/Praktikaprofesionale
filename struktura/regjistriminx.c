#include <stdio.h>

struct Student {
    char emri[30];
    int piket;
};

int main(){ 
    struct Student studentet[3];
    int i;
    int meIMiri = 0;

    for(i = 0; i < 3; i++){ 
        printf("Emri i studentit %d: ", i + 1);
        scanf("%29s", studentet[i].emri);

        printf("Piket: ");
        scanf("%d", &studentet[i].piket);
    }

    for(i = 1; i < 3; i++){ 
        if (studentet[i].piket > studentet[meIMiri].piket){ 
            meIMiri = i;
        }
    }

    printf("Studenti me i mire: %s me %d pike.\n",
           studentet[meIMiri].emri,
           studentet[meIMiri].piket);
           
    return 0;
}