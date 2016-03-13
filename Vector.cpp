/*----------------------------------------------------------------------------
* Copyright &copy; 2016 Hunter Straub <hunterstraub@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* --------------------------------------------------------------------------*/

#include <iostream>
#include <vector>

using namespace std;
//vector needs namespace std to run
int main()
{
	vector<int> coll;
	unsigned int i;

	for (i = 1; i <= 10; ++i)
		coll.push_back(i);
	cout << "coll vector data: ";

	for (i = 0; i < coll.size(); ++i)
		cout << coll[i] << " ";
	cout << endl;

	system("pause");
	return 0;
}