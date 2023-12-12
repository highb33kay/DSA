/**
 * mul - calculate the sum of multiples of 3 or 5.
 * @number: number to be parsed.
 *
 * Return: sum of multiples of 3 and 5, or 0 if the number is negative.
 */
int mul(int number)
{
	/* variable to hold multiple of 3 or 5 */
	int sum = 0;

	if (number > 0)
	{
		for (int i = 0; i < number; i++)
		{
			if (i % 3 == 0 || i % 5 == 0)
			{
				sum += i;
			}
		}

		/* return sum */
		return (sum);
	}

	return (0);
}

/**
 * main - program entry
 *
 * Return: 0
 */
int main(void)
{
	int number = 20;

	printf("The value of %d is %d\n", number, mul(number));

	return (0);
}
