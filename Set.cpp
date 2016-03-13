/*----------------------------------------------------------------------------
* Copyright &copy; 2016 Hunter Straub <hunterstraub@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* --------------------------------------------------------------------------*/

#include <iostream>
#include <set>

using namespace std;
//needs namespace std
int main()
{
	set <int> set_;
	set <int> ::const_iterator set_Iter, set_PIter, set_QIter;

	set_.insert(9);
	set_.insert(12);
	set_.insert(20);
	set_.insert(13);
	set_.insert(40);

	cout << "set_ data: ";
	for (set_Iter = set_.begin(); set_Iter != set_.end(); set_Iter++)
		cout << " " << *set_Iter;
	cout << endl;

	set_QIter = set_.upper_bound(20);
	cout << "The first element of set_ with a key more than 20 is: " << *set_QIter << endl;
	set_QIter = set_.upper_bound(11);

	if (set_QIter == set_.end())
		cout << "The set_ doesn't have an element with key greater than 40 is: " << *set_QIter << endl;

	set_PIter = set_.begin();
	set_QIter = set_.upper_bound(*set_PIter);
	cout << "The first element of set_ with a key more than the initial element of set_ is: " << *set_QIter << endl;

	system("pause");
	return 0;
}