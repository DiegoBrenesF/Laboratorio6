#include <stdio.h>
#include <stdlib.h>
#include "person.h"

void mostrarArreglo (Person arreglo[], int tama){
     printf ("\nArreglo de Personas:\n");
     printf ("%-20s %-10s %-10s\n", "Nombre", "Edad", "Altura(cm)");
     for (int i=0; i<tama; i++){
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
    };

    size_t tama = sizeof(Person)/sizeof(grupo[0]);

    printf ("\nArreglo original\n");
    mostrarArreglo (grupo, tama);

    return 0;
}
