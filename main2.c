#include<stdio.h>
#include "person.h"
#include "job.h"
#include "employee.h"


int main(){
    Person person1= {"Diogo" , 20};

    Job job1 = {"Developer" , 1};

    Employee employee1 ={person1 , job1};
    
    printEmployee(employee1);

}