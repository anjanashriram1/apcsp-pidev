#include <stdio.h>
float areaofcircle(float radius)
{
	float result;
	result = 3.14 * radius * radius;
	return result;

}

int  main()
{
float radius;
float result;
for (radius = 3.5; radius<=12.5; radius=radius+1)

{
	result = areaofcircle( radius);
	printf("Area is equal to %f\n", result); 
}

}
