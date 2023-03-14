#include<stdio.h>
double factorial_iter(double n)
{
	double factorial = 1;
	for (double i = 2; i <= n; i++)
		factorial = factorial * i;
	return(factorial);
}
double factorial_rec(double n)
{
	if (n <= 1)
		return 1;
	else 
		return(n * factorial_rec(n - 1));
}
int main(void)
{
	double n = 20;
	double result_iter = factorial_iter(n);
	double result_rec = factorial_rec(n);
	printf("iterative factorial result: %.0lf\n", result_iter);
	printf("recursive factorial result: %.0lf", result_iter);

	return 0;
}

