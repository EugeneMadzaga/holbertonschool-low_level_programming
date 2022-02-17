#include "main.h"

/**
 *string_toupper - Change string from lowercase to uppercase
 *@str: String to be changed
 *
 *return: A pointer to be chaged
 */
char *string_toupper(char *str)
{
int index = 0;

while (str[index])
{
if (str[index] >= 'a' && str[index] <= 'z')
str[index] -= 32;

index++;
}

return (str);
}
