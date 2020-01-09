#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);


float d;
float* ptrtod;
ptrtod = &d;

d = 7.89;
printf("The value of d is %f\n", d);
printf("The address of d is %d\n", &d);

*ptrtod = 7.87;
printf("The value of d is %f\n", d);

float e;
float* ptrtoe;
ptrtoe = &e;

e = 1.23;
printf("The value of e is %f\n", e);
printf("The address of e is %d\n", &e);

*ptrtoe = 1.234;
printf("The value of e is %f\n", e); 


float temp;
temp = *ptrtoe;
*ptrtoe = *ptrtod;
*ptrtod = temp;
printf("The value of d is %f\n", d);
printf("The value of e is %f\n", e);
}
