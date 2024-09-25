#include <iostream>
#include <Windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float numbers = 0;
	float sum = 0;
	/*int a = 3;
	while (a > 0)
	{

		std::cout << "Hello World\n";
		a--;
	}*/
	/*do
	{

	} while (true);

	for (int i = 5; i > 4 ; i++)
	{

		std::cout << "Hello World!\n";
		}*/
	
	
	do {
		std::cout << "¬водите любое число, пока не введЄте 0: ";
		std::cin >> numbers;

		if (numbers != 0) {
			sum += numbers; 
		}

	} while (numbers != 0);

	std::cout << "—умма введЄнных чисел: " << sum << "\n";

	return 0;
}
