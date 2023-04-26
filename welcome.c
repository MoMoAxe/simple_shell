#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CMD 256

/**
 * welcome - Welcome message
 * @name: pointer to the name string
 * Return: void.
 */
void welcome(char *name)
{
	int i = 0;
	char hlder[MAX_CMD];
	int j;

	j = 0;

	while (i < strlen(name))
	{
		if (name[i] != ' ')
		hlder[j] = name[i];
		else
		break;
		j++;
		i++;
	}

	hlder[j] = '\0';

	printf("%s welcome to ALX where we do hard things\n", hlder);
}

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char buff[MAX_CMD];

	printf("Enter Your First name and Surname:\n");
	fgets(buff, MAX_CMD, stdin);
	welcome(buff);

	return (0);
}
