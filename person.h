#ifndef PERSON_H
#define PERSON_H

#define MAX_NAME 50

typedef struct {
        char name [MAX_NAME];
        int age;
        double;
} Person;

int compare_by_name(const void *a, const void *b);
int compare_by_age(const void *a, const void *b);
int compare_by_height(const void *a, const void *b);

#endif
