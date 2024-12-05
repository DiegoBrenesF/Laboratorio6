#include <string.h>
#include "person.h"

/*
  Funcion para comparar el atributo name de una estructura Person.

  Params
  -const void *a: Puntero tipo void.
  -const void *b: Puntero tipo void.

  Retorno
  -Entero positivo, negativo o cero.
*/
int compare_by_name (const void *a, const void *b){
    const Person *person_a = (const Person *)a;
    const Person *person_b = (const Person *)b;
    return strcmp (person_a->name, person_b->name);
}

/*
  Funcion para comparar el atributo age de una estructura Person.

  Params
  -const void *a: Puntero tipo void.
  -const void *b: Puntero tipo void.

  Retorno
  -Entero positivo, negativo o cero.
*/
int compare_by_age (const void *a, const void *b){
    const Person *person_a = (const Person *)a;
    const Person *person_b = (const Person *)b;
    return person_a->age - person_b->age;
}

/*
  Funcion para comparar el atributo height de una estructura Person.

  Params
  -const void *a: Puntero tipo void.
  -const void *b: Puntero tipo void.

  Retorno
  - -1, 1 u 0.
*/
int compare_by_height (const void *a, const void *b){
    const Person *person_a = (const Person *)a;
    const Person *person_b = (const Person *)b;
    if (person_a->height < person_b->height) return -1;
    if (person_a->height > person_b->height) return 1;
    return 0;
}
