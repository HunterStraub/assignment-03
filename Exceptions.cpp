/*----------------------------------------------------------------------------
* Copyright &copy; 2016 Hunter Straub <hunterstraub@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* --------------------------------------------------------------------------*/

#include <iostream>
#include <exception>
#include <unistd.h>	//PROGRAM ONLY WORKS IN UNIX-BASED SYSTEMS

size_t getTotalSystemMemory()
{
	long pages = sysconf(_SC_PHYS_PAGES);
	long page_size = sysconf(_SC_PAGE_SIZE);
	return (pages * page_size);
}

int main()
{
	int * myArray;
	int finished = 0;
	size_t maxMemory = (getTotalSystemMemory()) / 1048576; //Get 90% of user's max memory
	unsigned long long int progress = 0;
	std::bad_alloc exception;
	while (!finished)
	{
		try
		{
			myArray = new int[100000000];
			progress += 1;
			std::cout << "Progress (" << (((progress*1.0) / maxMemory) * 10) << "%)" << std::endl;
			if ((((progress*1.0) / maxMemory) * 10) >= 100)
				throw exception;
		}
		catch (std::exception & e)
		{
			std::cout << "Maximum memory reached. Deleting..." << std::endl;
			delete[] myArray;
			finished = 1;
			std::cout << "Memory cleared. Goodbye." << std::endl;
		}
	}
	return 0;
}