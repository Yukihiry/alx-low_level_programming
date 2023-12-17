	/* your code goes there */
	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("Last digit of %d is %d and is 0", n, lastDigit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, lastDigit);
	}
	printf("\n");
	return (0);
}
