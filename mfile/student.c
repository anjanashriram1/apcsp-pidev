#include <stdio.h>
#include <string.h>
#include "student.h"


void printStudent(struct Student* student)
{
  printf("First name: %s\n", student->firstname);
  printf("Last name:%s\n", student->lastname);
  printf("Student age: %d\n", student->age);
  printf("Student ID: %d\n", student->studentid);
}

