
#include <iostream>
#include <vector>
#include <ctime>
#include <unordered_set>



int main()
{
	std::cout << "*************************************" << std::endl;
	std::cout << "Task 1" << std::endl;

	std::initializer_list<int> myList{ 1, 2, 3, 4, 5 };
	for (auto i: myList)
	{
		std::cout << i << " ";
	}

	std::cout << std::endl;
	std::cout << "*************************************" << std::endl;
	std::cout << "Task 2" << std::endl;

	std::srand(std::time(nullptr));
	std::vector<int> myVector;
	myVector.resize(100);
	int cnt = 0;

	for (auto i: myVector)
	{
		myVector[cnt] = rand() % 10;
		cnt++;

	}

	std::cout << "MyVector size = " << myVector.size() << std::endl;

	auto foo = [&myVector](int a)
	{
		int cnt = 0;
		std::unordered_multiset<int> myList_1(myVector.begin(),myVector.end());

		for (auto i: myVector)
		{
			std::cout << i << " ";
		}

		std::cout << "\n*********************" << std::endl;

		for (auto i: myList_1)
		{
			std::cout << i << " ";

		}
		std::cout << std::endl;
		return myList_1.count(a);
	};

	std:: cout << foo(2) << std::endl;

		std::cout << "*************************************" << std::endl;
	std::cout << "Task 3" << std::endl;


	return 0;
}
