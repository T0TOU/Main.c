int jet(int x)
{
	int sum = 1;
	int  i = 1;
	while (i <= x && x != 0)
	{
		sum *= i;
		i++;
	}
	if (i > x)
		return sum;
}