#include <stdio.h>

int main()
{
  int a = 0;
  int b = 1;
  int c = 2;
  int d = 3;
  int e = 4;
  int f = 5;
  int g = 6;

  // if statement to test is a is equal to 0
  if (a == 0)
  {
    printf("a is 0\n");
  }
  else
  {
    printf("a is not 0\n");
  }
  

if (a != b)
  {
    printf("a is not equal to b\n");
  }
  else
  {
  printf("a is equal to b\n");
  }



  if (c > b)
  {
  printf("c is greater than b\n"); 
  }
else
{
printf("c is not greater than b\n");
}


  if (e >= d)
{
printf("e is greater than or equal to d\n");
}
else
{
printf("e is not greater than or equal to d\n");
}

if (a == 0 && b == 0)
{
printf("a and b are both equal to 0\n");
}
else
{
printf("both a and b are not equal to 0\n");
}

if (a == 0 || b == 0)
{
printf("a or b is equal to 0\n");
}
else
{
printf("neither a nor b equals 0\n");
}


if (! (a == 0)) 
{
printf("a is not equal to 0\n");
}
else
{
printf("a is equal to 0\n");
}

}
