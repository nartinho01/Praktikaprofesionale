#include <stdio.h>
#include <stdlib.h>

int main() {

    int n = 1;
    int shuma = 0;

    printf("Sheno numrin e ekipeve: ");
    scanf("%d", &n);

    int *buffer = malloc(n * sizeof(int));

    if (buffer == NULL) {
        return 1;
    }

    char *ekipet[] = {
        "Real Madrid",
        "Barcelona",
        "Atletico Madrid",
        "Athletic Bilbao",
        "Valencia"
    };

    for (int i = 0; i < n; i++) {

        buffer[i] = 0;

        buffer = realloc(buffer, (i + 1) * sizeof(int));

        if (buffer == NULL) {
            return 1;
        }

        printf("Trofejte e %s: ", ekipet[i]);
        scanf("%d", &buffer[i]);

        shuma += buffer[i];
    }

    printf("\nNumri total i trofeve: %d\n", shuma);

    for (int i = 0; i < n; i++) {
        printf("%s: %d\n", ekipet[i], buffer[i]);
    }

    free(buffer);

    return 0;
}