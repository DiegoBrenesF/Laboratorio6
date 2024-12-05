#include <stdio.h>
#include <stdlib.h>
#include "person.h"

void mostrarArreglo (Person arreglo[], size_t tama){
     printf ("%-20s %-10s %-10s\n", "Nombre", "Edad", "Altura(cm)");
     for (size_t i=0; i<tama; i++){
         printf ("%-20s %-10d %-10.2f\n", arreglo[i].name, arreglo[i].age, arreglo[i].height);
     }
     printf ("\n");
}

int main (){
    Person grupo[] = {
           {"Diego Brenes", 36, 169.00},
           {"Armando Segura", 36, 165.59},
           {"Eduardo Cuadra", 35, 167.36},
           {"Andres Garita", 40, 172.31},
           {"Merry Popins", 30, 168.42},
           {"Lilliam Cervantes", 52, 166.33},
           {"Elsa Figueroa", 61, 158.61},
           {"Jona Soto", 26, 171.26},
           {"Lorenzo Soto", 28, 169.28},
    };

    size_t tama = sizeof(grupo)/sizeof(grupo[0]);

    printf ("\nArreglo original de estructuras tipo Person\n");
    mostrarArreglo (grupo, tama);

    printf ("\nArreglo de estructuras tipo Person ordenado por nombre\n");
    qsort(grupo, tama, sizeof(Person), compare_by_name);
    mostrarArreglo (grupo, tama);

    printf ("\nArreglo de estructuras tipo Person ordenado por edad\n");
    qsort(grupo, tama, sizeof(Person), compare_by_age);
    mostrarArreglo (grupo, tama);

    printf ("\nArreglo de estructuras tipo Person ordenado por altura\n");
    qsort(grupo, tama, sizeof(Person), compare_by_height);
    mostrarArreglo (grupo, tama);

    return 0;
}
