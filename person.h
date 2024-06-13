#ifndef PERSON_H
#define PERSON_H
#include<stdio.h>
#include "employee.h"

typedef struct {
    char name[100];
    int age;
}Person;

void printPerson(Person p){
    printf("name: %s\n", p.name);
    printf("Age: %d\n", p.age);
}

#endif