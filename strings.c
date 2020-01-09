


#include <stdio.h>

# include <string.h>

int main (void)
{
char string1[27];
for (char a = 0; a < 26; a++)
{
	string1 [a] = a + 97;
}
string1[26] = '\0';
char string2[] = "abcdefghijklmnopqrstuvwxyz";
for (char a = 0; a < 26; a++)
{
	string2 [a] = string2 [a] - 32;
}

if (strcmp(string1, string2) == 0)
	printf("Identical\n");
else
	printf("Different\n");

char string3[53];
strcpy(string3, string1);
strcat(string3, string2);
printf("Lowercase: %s\n", string1);
printf("Uppercase: %s\n", string2);
printf("Both: %s\n", string3);
}

