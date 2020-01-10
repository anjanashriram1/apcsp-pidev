#include <stdio.h>
#include <string.h>
#include "student.h"

int main()
{ 
  char input[256];
  struct Student students[256];
  char answer;
  int studentnumber = 0;

  while (1)
  {
    // input loop
    printf("Do you want to input a new student(yes/no)\n");
    fgets(input, 256, stdin);
    sscanf(input, "%s", &answer);
    if (strcmp(&answer, "no") == 0)
      break;
  
    char firstname[256];
    char lastname[256];
    int age;
    int studentid; 

    printf("Enter the student's first name:\n");
    fgets(input, 256, stdin);
    sscanf(input, "%s", firstname);

    printf("Enter the student's last name:\n");
    fgets(input, 256, stdin);
    sscanf(input, "%s", lastname);

    printf("Enter the student's age\n");
    fgets(input, 256, stdin);
    sscanf(input, "%d", &age);

    printf("Enter the student's id:\n");
    fgets(input, 256, stdin);
    sscanf(input, "%d", &studentid);
 
    strcpy(students[studentnumber].firstname, firstname);
    strcpy(students[studentnumber].lastname, lastname);
    students[studentnumber].age = age;
    students[studentnumber].studentid = studentid;
    studentnumber = studentnumber + 1;
  }  // end input loop

  // print students
  for (int i = 0; i < studentnumber; i++)
  {
    printStudent(&(students[i])); 
  }
}

