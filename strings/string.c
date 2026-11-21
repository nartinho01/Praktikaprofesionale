#include <stdio.h>
#include <string.h>

int main()
{
    // // Nje karakter
    // char shkronja = 'A';

    // printf("Shkronja: %c\n\n", shkronja);

    // // Nje string
    // char emri[] = "Nart";

    // printf("Emri: %s\n\n", emri);

    // // Qasja ne karakteret e stringut
    // printf("Karakteri i pare: %c\n", emri[0]);
    // printf("Karakteri i dyte: %c\n\n", emri[1]);

    // // Marrja e emrit nga perdoruesi
    // char emriNxenesit[30];

    // printf("Shkruaj emrin: ");
    // scanf("%29s", emriNxenesit);

    // printf("Pershendetje %s\n\n", emriNxenesit);

    // // strlen - gjen gjatesine e stringut
    // printf("Gjatesia e emrit: %lu\n\n", strlen(emriNxenesit));

    // // strcmp - krahason dy stringje
    // char password[30];

    // printf("Shkruaj passwordin: ");
    // scanf("%29s", password);

    // if (strcmp(password, "1234") == 0)
    // {
    //     printf("Passwordi eshte i sakte.\n\n");
    // }
    // else
    // {
    //     printf("Passwordi eshte gabim.\n\n");
    // }

    // // strcpy - kopjon nje string
    // char emri1[30] = "Nart";
    // char emri2[30];

    // strcpy(emri2, emri1);

    // printf("Emri origjinal: %s\n", emri1);
    // printf("Emri i kopjuar: %s\n\n", emri2);

    // // strcat - bashkon dy stringje
    // char emriPlote[50] = "Nart";
    // char mbiemri[] = "kozhani";

    // strcat(emriPlote, mbiemri);

    // printf("Emri plote: %s\n\n", emriPlote);

    // Shembull praktik - Login
    // char username[30];
    // char loginPassword[30];

    // printf("Username: ");
    // scanf("%29s", username);

    // printf("Password: ");
    // scanf("%29s", loginPassword);

    // if (
    //     strcmp(username, "admin") == 0 &&
    //     strcmp(loginPassword, "1234") == 0
    // ) { 
    //     printf("Login me sukses!\n");
    // } else { 
    //     printf("Login deshtoi!\n");
    // }

    //Shembull i leximit te nje stringu me me shume se nje fjale - fgets
    // char fullname[50];

    // printf("Shkruaj emrin dhe mbiemrin: ");
    // fgets(fullname, 50, stdin);

    // fullname[strcspn(fullname, "\n")] = '\0';//nese ne fund te stringut e klikojme enterin atehere do te shfaq edhe \n,keshtu qe e zevendsojm me null terminator \0

    // printf("Emri dhe mbiemri eshte: %s\n", fullname);

    // //////////////////////////////////////////////

    // char email[50];

    // printf("Shkruaj email-in: ");
    // scanf("%49s", email);

    // if (strchr(email, '@') != NULL){ 
    //     printf("Email-i duket valid.\n");
    // } else{ 
    //     printf("Email-i nuk eshte valid.\n");
    // }

    ///////////////////////////////////////////////

    char user[50];
    printf("Shkruaj rolin tuaj: ");
    scanf("%49s",user);

    if(strcmp(user, "admin") == 0){ 
        printf("Roli juaj eshte admin dhe keni qasje te plote.\n");
    }
    else if(strcmp(user, "teacher") == 0){ 
        printf("Roli juaj eshte teacher dhe keni qasje te pjesshme.\n");
    }
    else if(strcmp(user, "student") == 0){ 
        printf("Roli juaj eshte student dhe keni te drejte te lexoni informata.\n");
    }
    else { 
        printf("Roli nuk ekziston!\n");
    }

    return 0;
}