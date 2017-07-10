#include <iostream>
#include <unistd.h>

int main()
{
	std::cout << "Insert number ";
	double num;
	std::cin >> num;
	if (num < 5)
	{
		std::cout << "This number is small" << std::endl;
	}
	else
	{
		sleep(5);
		std::cout << "This number is NOT small" << std::endl;
	}
	return 0;
}

