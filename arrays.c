#include <stdio.h> 
int arrayAdd (int* arr, int s, int n)
{

	for (int a = 0; a < s;  a++)
	{
		arr[a] = arr[a] + n;
	}

}


int main()

{

int arr[100];
for (int a = 0; a < 100; a++)

{

	arr[a] = a * a;
	printf("%d",arr[a]);
}


arrayAdd(arr, 100, 5);
for (int a = 0; a < 100; a++)
{
printf("%d\n", arr[a]);
}

return 0;
}
