/**
 * swap_int - swap the value of two integers
 * @a: first integer
 * @b: second integer
 *
 * Description: taske the value of a and assign to b and the reverse
 *
 * Return: NOthing
 */

void swap_int(int *a, int *b)
{

	int temp = *a;
	*a = *b;
	*b = temp;
}
