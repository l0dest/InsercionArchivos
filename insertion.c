#include <stdio.h>

#define ARRAY_SIZE 10

int main(void) 
{
    char *planets[] = {"Cells-II", "Ress-III", "Nomun", "Ctyp-e","Deisom", 
                    "Fog-r", "Bluerrot", "Difftial", "Dertive", "Pior"};

    int moons[ARRAY_SIZE];

    int i, j;
    int aux_num;
    char* aux_name;

    // Pedir los valores de "moons"
    printf("===========================\n");
    printf("Ingrese las Lunas\n");
    printf("===========================\n");
    for (i = 0; i < ARRAY_SIZE; i++)
    {
        printf("Planeta: %s | Nro Lunas: ", planets[i]);
        scanf("%d", &moons[i]);
    }
    printf("===========================\n");

    // Algoritmo de Insercion
    for (i = 0; i < (ARRAY_SIZE - 1); i++)
    {
        for (j = i; j >= 0; j--)
        {
            if (moons[j+1] < moons[j])
            {
                aux_num = moons[j + 1];
                moons[j + 1] = moons[j];
                moons[j] = aux_num;
    
                aux_name = planets[j + 1];
                planets[j + 1] = planets[j];
                planets[j] = aux_name;
            }
        }
    }

    printf("===========================\n");
    printf("Arreglo Ordenado\n");
    printf("===========================\n");
    for (i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%d) Planeta: %s | Nro Lunas: %d\n",i+1, planets[i], moons[i]);
    }
    printf("===========================\n");

    getchar();
    getchar();
}