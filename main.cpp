#include <iostream>
#include <list>

int main()
{
	int temp = 0;
	srand(time(NULL));
	std::list <int> arr;
	arr.push_front(202);
	arr.push_front(201);
	for (int i = 0; i < 100; i++)
	{
		arr.push_back(rand() % 200);
	}
	arr.push_back(203);

	auto third = std::next(arr.begin(), 3); 
	

	auto penultimate = std::next(arr.end(), -2);
	
	
	auto first = arr.begin();
	temp = *penultimate;
	*penultimate = *first;
	*first = temp;

	std::cout << *third << std::endl;
	std::cout << *penultimate << std::endl;
	std::cout << *first << std::endl;

}
