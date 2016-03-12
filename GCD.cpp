/*----------------------------------------------------------------------------
* Copyright &copy; 2016 Hunter Straub <hunterstraub@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* --------------------------------------------------------------------------*/
#include <iostream>

int gcd(int a, int b)	//base case
{
	int c;
	while (a != 0)
	{
		c = a; a = b%a;  b = c;
	}
	return b;
}

int gcd_iter(int a, int b)	//recursive case
{
	if (a == 0) return b;
	return gcd_iter(b%a, a);
}


int main()
{
	int a, b;
	a = 1239; //enter the first value
	b = 735; //enter the second value

	std::cout << "GCD(a,b) = " << gcd_iter(a, b) << std::endl; //finds the GCD of a and b

	return 0;
}
