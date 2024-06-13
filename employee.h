#ifndef PERSON_H
#define PERSON_H
#include<stdio.h>
#include "job.h"
#include "person.h"

typedef struct {
    Person person;
    Job job;
}Employee;

void printEmployee(Employee e){
    printf("name: %s\n", e.person.name);
    printf("Age: %d\n", e.person.age);
    printf("Company: %s\n", e.job.company);
    printf("Experience: %d\n", e.job.experience);
}

#endif