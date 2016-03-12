/*----------------------------------------------------------------------------
* Copyright &copy; 2016 Hunter Straub <hunterstraub@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* --------------------------------------------------------------------------*/

#include<iostream>
#include<conio.h>

using std::cout;
using std::cin;
using std::endl;

template<class t>

void swap(t &x, t &y)
{
	t temp = x;
	x = y;
	y = temp;
}

void swapping(int a, int b, float c, float d)
{
	cout << "\na and b before swapping:	" << a << "\t" << b;
	swap(a, b);
	cout << "\na and b after swapping:		" << a << "\t" << b;
	cout << "\n\nc and d before swapping:	" << c << "\t" << d;
	swap(c, d);
	cout << "\nc and d after swapping:		" << c << "\t" << d << endl;
}

int main()
{
	int a, b;
	float c, d;
	cout << "Enter value for A (integer):	";
	cin >> a;
	cout << "Enter value for B (integer):	";
	cin >> b;
	cout << "Enter value for C (float):	";
	cin >> c;
	cout << "Enter value for D (float):	";
	cin >> d;
	swapping(a, b, c, d);
	cin.get();

	system("pause");
	return 0;
}