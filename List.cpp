/*----------------------------------------------------------------------------
* Copyright &copy; 2016 Hunter Straub <hunterstraub@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* --------------------------------------------------------------------------*/

#include <iostream>
#include <list>

using namespace std;
//needs namespace std
int main()
{
	list<char> letters;

	for (char chs = 'A'; chs <= 'Z'; ++chs)
		letters.push_back(chs);

	list<char>::const_iterator pos;
	cout << "letters: ";
	for (pos = letters.begin(); pos != letters.end(); ++pos)
		cout << *pos << ' ';
	cout << endl;

	system("pause");
	return 0;
}