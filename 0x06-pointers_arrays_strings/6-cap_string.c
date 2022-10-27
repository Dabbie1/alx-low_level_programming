#include "main.h"

/**
 * cap_string - capitalizes words
 * @str: string
 * Return: pointer to string
 */
char *cap_string(char *str)
{
	int x, y;
	int trigger;
	char nots[] = ",;.!?(){}\nt\" ";

	for (x = 0, trigger = 0; str[x] != '\0'; x++)
	{
		if (str[0] > 96 && str[0] < 123)
			trigger = 1;
		for (y = 0; nots[y] != '\0'; y++)
		{
			if (nots[y] == str[x])
				trigger = 1;
		}
		if (trigger)
		{
			if (str[x] > 96 && str[x] < 123)
			{
				str[x] -= 32;
				trigger = 0;
			}
			else if (str[x] > 64 && str[x] < 91)
				trigger = 0;
			else if (str[x] > 47 && str[x] < 58)
				trigger = 0;
		}
	}
	return (str);
}
