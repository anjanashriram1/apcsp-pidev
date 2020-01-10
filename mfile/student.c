#include <stdio.h>
#include <string.h>
#include "student.h"
struct Student {
  char firstname[50];
  char lastname[50];
  int age[100];
  int studentid;
};


void printStudent(struct Student* student)
{
 
  printf("First name: %s\n", student->firstname);
  printf("Last name:%s\n", student->lastname);
  printf("Student age: %d\n", student->age);
  printf("Student ID: %d\n", student->studentid);
 
}

