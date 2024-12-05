#include <string.h>
#include "person.h"

int compare_by_name (const void *a, const void *b){
    const Person *person_a = (const Person *)a;
    const Person *person_b = (const Person *)b;
    return strcmp (person_a->name, person_b->name);
}

int compare_by_age (const void *a, const void *b){
    const Person *person_a = (const Person *)a;
    const Person *person_b = (const Person *)b;
    return person_a->age - person_b->age);
}

int compare_by_height (const void *a, const void *b){
    const Person *person_a = (const Person *)a;
    const Person *person_b = (const Person *)b;
    if (person_a->height < person_b->height) return -1;
    if (person_a->height > person_b->height) return 1;
    return 0;
}
