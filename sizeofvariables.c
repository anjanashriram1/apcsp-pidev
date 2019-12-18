#include<stdio.h>

int main()
{
  char a = 'z';
  int b = 7;
  float c = 5.986;
  double d = 0.56789123;
  short e = -1000;
  signed char f = +27;
  // print value and size of an int variable
  printf("char a value: %c and size: %c bytes\n", a, sizeof(a));
  printf("int b value: %d and size: %d bytes\n", b, sizeof(b));
  printf("float c value: %f and size: %f bytes\n", c, sizeof(c));
  printf("double d value: %d and size: %d bytes\n", d, sizeof(d)); 
  printf("short e value: %hi and size: %hi bytes\n", e, sizeof(e));
  printf("signed char f value: %hhi and size: %hhi bytes\n", f, sizeof(f)); 
}





