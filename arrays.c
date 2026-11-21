#include <stdio.h>

int main()
{
    ////////////////////////////////////////////////////////

    // int numrat[3] = {10,20,30};

    // printf("Para ndryshimit: %d\n",numrat[1]);
    // numrat[1]=50;
    // printf("Pas ndryshimit: %d\n", numrat[1]);

    ////////////////////////////////////////////////////////

    // int numrat[5] = {10,20,30,40,50};

    // printf("Elementet e array-it:\n");
    // for (int i = 0; i < 5; i++){
    //     printf("numrat[%d] = %d\n", i, numrat[i]);
    // }

    ////////////////////////////////////////////////////////

    // int numrat[5];

    // for (int i = 0; i < 5; i++){
    //     printf("Shkruaj numrin %d: ", i + 1);
    //     scanf("%d", &numrat[i]);
    // }

    // printf("Numrat qe keni shkruar jane:\n");
    // for (int i = 0; i < 5; i++){
    //     printf("%d ", numrat[i]);
    // }
    // printf("\n");

    ////////////////////////////////////////////////////////

    // int numrat[5] = {2,4,6,8,10};
    // int shuma = 0;

    // for (int i = 0; i < 5; i++){
    //     shuma += numrat[i];
    // }

    // double mesatarja = (double)shuma / 5;
    // printf("Shuma: %d\n", shuma);
    // printf("Mesatarja: %.2f\n", mesatarja);

    ////////////////////////////////////////////////////////

    // int numrat[5] = {12,7,25,4,18};
    // int maksimumi = numrat[0];
    // int minimumi = numrat[0];

    // for (int i = 1; i < 5; i++){
    //     if (numrat[i] > maksimumi){
    //         maksimumi = numrat[i];
    //     }
    // }

    // for (int i = 1; i < 5; i++){
    //     if (numrat[i] < minimumi){
    //         minimumi = numrat[i];
    //     }
    // }

    // printf("Numri me i madh eshte: %d\n", maksimumi);
    // printf("Numri me i vogel eshte: %d\n", minimumi);

    //////////////////////////////////////////////////////////

    // int numrat[6] = {4,9,12,7,20,5};
    // int kerkimi;
    // int u_gjet = 0;

    // printf("Shkruaj numrin qe deshiron ta kerkosh: ");
    // scanf("%d", &kerkimi);

    // for (int i = 0; i < 6; i++){
    //     if (numrat[i] == kerkimi){
    //         printf("Numri u gjet ne indeksin %d.\n", i);
    //         u_gjet = 1;
    //         break;
    //     }
    // }

    // if (!u_gjet){
    //     printf("Numri nuk u gjet.\n");
    // }

    //////////////////////////////////////////////////////////

    // char shkronjat[4] = {'A','B','C','D'};
    // char emri[] = "Nart";

    // printf("Shkronjat: " );
    // for (int i = 0; i < 4; i++){
    //     printf("%c ",shkronjat[i]);
    // }

    // printf("\nEmri: %s\n", emri);

    //////////////////////////////////////////////////////////

    // int notat[5];
    // int shuma = 0;
    // int maksimumi = 0;
    // int kalues = 0;

    // for (int i = 0; i < 5; i++){
    //     printf("Shkruani noten e nxenesit %d: ", i + 1);
    //     scanf("%d", &notat[i]);

    //     shuma += notat[i];

    //     if (notat[i] > maksimumi){
    //         maksimumi = notat[i];
    //     }

    //     if (notat[i] >= 6){
    //         kalues++;
    //     }
    // }
    // printf("Nota me e madhe eshte: %d\n", maksimumi);
    // printf("Mesatarja: %.2f\n", (float)shuma / 5);
    // printf("Nxenes qe kane kaluar: %d\n",kalues);

    //////////////////////////////////////////////////////////

    // double temp[7] = {25.4, 17.6, 13.1, 15.0, 22.4, 31.5, 10.7};
    // double minimumi = temp[0];
    // double maksimumi = temp[0];
    // double shuma = 0;

    // for (int i = 0; i < 7; i++)
    // {
    //     if (temp[i] < minimumi)
    //     {
    //         minimumi = temp[i];
    //     }

    //     if (temp[i] > maksimumi)
    //     {
    //         maksimumi = temp[i];
    //     }

    //     shuma += temp[i];
    // }
    // printf("Temp me e madhe eshte: %.2lf\n", maksimumi);
    // printf("Temp me e vogel eshte: %.2lf\n", minimumi);
    // printf("Mesatarja: %.2f\n", (float)shuma / 7);

    //////////////////////////////////////////////////////////

    // double shitjet[7] = {102.3, 223.5, 131.0, 57.4, 220.4, 155.5, 100.7};
    // double maksimumi = shitjet[0];
    // double shuma = 0;
    // int indeksi = 0;
    // double totali;

    // for (int i = 0; i < 7; i++)
    // {

    //     if (shitjet[i] > maksimumi)
    //     {
    //         maksimumi = shitjet[i];
    //         indeksi = i + 1;
    //     }

    //     shuma += shitjet[i];
    // }
    // printf("Shitja me e madhe eshte: %.2lf ne diten %d\n", maksimumi,indeksi);
    // printf("Mesatarja: %.2f\n", (float)shuma / 7);
    // printf("Shuma: %.2lf\n", shuma);

    ////////////////////////////////////////////////////////////

    

    return 0;
}