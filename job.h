#ifndef PERSON_H
#define PERSON_H
#include<stdio.h>


typedef struct {
    char company[100];
    int experience;
}Job;



void printJob(Job j){
    printf("Company: %s\n", j.company);
    printf("Experience: %d\n", j.experience);
}

#endif