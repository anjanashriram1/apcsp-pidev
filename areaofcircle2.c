#include <stdio.h>
float areaofcircle(float radius)
{
	float result;
	result = 3.14 * radius * radius;
	return result;

}

int  main(int argc, char* argv[])
{
if (argc != 3)
{
	printf("%s: Please input 2 floats\n", argv[0]);
}

float lowerrange;
int a = sscanf(argv[1], "%f", &lowerrange);
if (a != 1)
{ printf("Is not a float, give two floats\n");}


float upperrange;
a = sscanf(argv[2], "%f", &upperrange);
if (a != 1)
{ printf("Is not a float, give two floats\n");}

for (float radius = lowerrange; radius <= upperrange; radius++) 
{ float result = areaofcircle(radius);
printf("Area of circle is %f\n", result);

}

}
