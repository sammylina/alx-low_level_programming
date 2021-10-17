/**
 * set_string - set the value of a pointer that points
 * to a char
 * @s: pointer to a pointer
 * @to: pointer to char
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
