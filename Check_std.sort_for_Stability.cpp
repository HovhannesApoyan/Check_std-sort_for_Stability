#include <iostream>
#include <vector>
#include <algorithm>

struct Number {
	int number;
	int id;
};

int main()
{
	srand(time_t(NULL));
	std::vector<Number> numbers;
	for (int i = 0; i < 100; ++i) {
		Number number;
		number.number = rand() % 50;
		number.id = i;
		numbers.push_back(number);
	}
	std::sort(numbers.begin(), numbers.end(), [](const Number& first, const Number& second)
		{
			return first.number < second.number;
		});
	std::cout << "number - id\n";
	for (auto el : numbers)
		std::cout << el.number << "-" << el.id << "\n";
}