#include <iostream>

int fib_iter(int n) //recursive case
{
	if (n == 0 || n == 1)
		return n;
	return fib_iter(n - 1) + fib_iter(n - 2);
}


int fib(int n) //base case
{
	int f[n + 1];

	f[0] = 0;
	f[1] = 1;

	for (int i = 2; i <= n; i++)
		f[i] = f[i - 1] + f[i - 2];

	return f[n];
}


int main()
{
	std::cout << fib(37) << std::endl;
	return 0;
}
