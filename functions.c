#include <stdio.h>

// int shuma(){ 
//     int sum = 7 + 8;
//     return sum;
// }

// int shuma2(int a, int b){ 
//     int sum = a + b;
//     return sum;
// }

// int numri(int x){ 
//     if(x >= 100){ 
//         printf("Vlera e x eshte me e madhe ose e barabart me 100");
//     }
//     else{ 
//         printf("Vlera e x eshte me e vogel se 100");
//     }
// }

// void pershendetje(){ 
//     printf("\nPershendetje per te gjithe klasen");
// }

// void prodhimi(int a, int b){
//     int prod = a * b; 
//     printf("\nProdhimi i numrave eshte %d\n", prod);
// }

// void numrii(int x){
//     if(x % 2 == 0){ 
//         printf("Numri eshte qift");
//     }
//     else{ 
//         printf("Numri eshte tek");
//     }
// }

void krahasimi(int a, int b){ 
    if(a > b){ 
        printf("Numri %d eshte me i madh se numri %d\n",a,b);
    }
    else if(a < b){ 
        printf("Numri %d eshte me i vogel se numri %d\n",a,b);
    }
    else{ 
        printf("Numri %d eshte i barabart me numrin %d\n",a,b);
    }

    int shuma = a + b;
    printf("Shuma e numrit %d me numrin %d eshte %d\n",a,b,shuma);

    double mesatarja = shuma/2;
    printf("Mesatarja e numrave %d dhe %d eshte %.2lf",a,b,mesatarja);
}

void kalkulatori(float a,float b){ 
    float perimetri = 2*(a+b);
    printf("\nPerimetri i katerkendeshit me brinje %.2f cm dhe %.2f cm eshte %.2f cm",a,b,perimetri);

    float syprina = a*b;
    printf("\nSyprina e katerkendeshit me brinje %.2f cm dhe %.2f cm eshte %.2f cm2\n",a,b,syprina);

}

void matrica(int array[], int x){ 
    for(int i = 0; i < x; i++){ 
        printf("%d\n",array[i]);
    }
}

void matrica2(int array[],int x){ 
    int shuma = 0;
    for(int i = 0; i < x; i++){
        shuma += array[i];
    }
    float mesatarja = shuma / x;
    printf("Shuma e elementeve te matrices eshte: %d\n",shuma);
    printf("Mesatarja e elementeve te matrices eshte: %.2f\n",mesatarja);
}

void mosha(int studentet[], int x){ 
    int mosham = studentet[0];
    int moshav = studentet[0];
    for (int i = 1; i < x; i++){
        if (studentet[i] > mosham){
            mosham = studentet[i];
        }
    }
    printf("Studenti me moshen me te madhe eshte %d vjeq\n",mosham);

     for (int i = 1; i < x; i++){
        if (studentet[i] < moshav){
            moshav = studentet[i];
        }
    }
    printf("Studenti me moshen me te vogel eshte %d vjeq\n",moshav);
}

void numbers(int numratt[],int x){ 
    int countq = 0;
    int countt = 0;
    for (int i = 0; i < x; i++){
        if(numratt[i] % 2 == 0){ 
            countq += 1;
        }
        else{
            countt += 1;
        }
    }
    printf("Numrat qift ne matrice jane: %d\n",countq);
    printf("Numrat tek ne matrice jane: %d\n",countt);
}

int main(){ 
    // printf("Shuma e funskionit eshte: %d\n",shuma());

    // printf("Shuma e funksionit eshte: %d\n",shuma2(7,8));

    // numri(120);

    // pershendetje();

    // prodhimi(7,8);

    // numrii(12);

    krahasimi(4,4);
    
    kalkulatori(10,15);

    int numrat[] ={4,6,8,10,12};
    matrica(numrat,5);

    int numrat2[] ={4,6,8,10};
    matrica2(numrat2,4);

    int studentet[] ={18,20,19,22};
    mosha(studentet,4);

    int numratt[] ={18,20,19,22};
    numbers(numratt,4);

    return 0;
}