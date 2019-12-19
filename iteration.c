#include <stdio.h>

int main()
{
	int div=6;
	printf("Div=6\n");
	for(int i=1; i <= 100; i++)
	{
		if(i%div==0)
		{
			printf("%d\n", i);
		}
	}
}
