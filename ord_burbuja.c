#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main()
{
    int aux;
    int i, j;
    int ord_vector[SIZE];
    srand(time(NULL));
    printf("Generacion de numeros aleatorios");
    for (int i = 0; i < SIZE; i++)
    {
        ord_vector[i] = 100 + rand() % (101);
        printf("\n%d", ord_vector[i]);
    }
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            if (ord_vector[j] > ord_vector[j + 1])
            {
                aux = ord_vector[j];
                ord_vector[j] = ord_vector[j + 1];
                ord_vector[j + 1] = aux;
            }
        }
    }
}
