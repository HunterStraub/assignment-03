/*----------------------------------------------------------------------------
* Copyright &copy; 2016 Hunter Straub <hunterstraub@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* --------------------------------------------------------------------------*/
#include <iostream>

int pow_iter(int a, int b) //recursive case
{
	if (b)
		return a*pow_iter(a, b - 1);
	else
		return 1;
}

int pow(int a, int b) //base case
{
	if (a < 0)
		a = a * -1;
	int r = a;

	for (int i = a; i <= b; i++)
		r *= a;
	return r;
}

int main()
{
	int a, b;
	std::cin >> a >> b;
	std::cout << pow_iter(a, b) << std::endl;
}
