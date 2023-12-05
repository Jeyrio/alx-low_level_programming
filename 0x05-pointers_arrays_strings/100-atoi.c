#include "main.h"

/**
 * _atoi - Function that convert a string to an integer
 * @s: Pointer to be checked
 *
 * Return: 0 if no number in the string
 */
int _atoi(char *s)
{
	unsigned int count = 0; /** used as an index to traverse the string **/
	unsigned int size = 0; /** number of digit encountered in the string **/
	unsigned int m = 1; /** Multiplier used during the conversion process **/
	unsigned int sign = 1; /** to store the sign, defaulting to positive **/
	unsigned int result = 0; /** to store the converted integer **/
	unsigned int i;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;

		if (*(s + count) == '-') /** Handle - sign if present **/
			sign *= -1;

		if ((*(s + count) >= '0') && (*(s + count) <= '9')) /** String Traversal**/
		{
			if (size > 0)

				m *= 10;
			size++;
		}
		count++;
	}

	for (i = count - size; i < count; i++) /** Conversion loop **/
	{
		result = result + ((*(s + i) - 48) * m);
		m /= 10;
	}

	return (result * sign);
}
