#include <stdio.h>

int main(void)
{
    int makinat[6];
    int gjithsej = 0;
    int oreTeNgarkuara = 0;
    int oreMaksimum = 0;

    for (int i = 0; i < 6; i++)
    {
        printf("Sa makina hyne ne oren %d? ", i + 1);
        scanf("%d", &makinat[i]);

        // Vlera negative nuk eshte e vlefshme
        while (makinat[i] < 0)
        {
            printf("Shkruaj nje numer 0 ose me te madh: ");
            scanf("%d", &makinat[i]);
        }
    }

    for (int i = 0; i < 6; i++)
    {
        printf("Ora %d: %d makina\n", i + 1, makinat[i]);
        gjithsej += makinat[i];
        if (makinat[i] > 10)
        {
            oreTeNgarkuara++;
        }
        if (makinat[i] > makinat[oreMaksimum])
        {
            oreMaksimum = i;
        }
    }

    printf("Gjithsej: %d makina\n", gjithsej);
    printf("Ore me mbi 10 makina: %d\n", oreTeNgarkuara);
    printf("Ora me me shume makina: %d\n", oreMaksimum + 1);
    return 0;
}