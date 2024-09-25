#include <iostream>
#include <Windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float numbers = 0;
	float sum = 0;
	float sumEven = 0;
	float sumOdd = 0;
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
		std::cout << "Ââîäèòå ëşáîå ÷èñëî, ïîêà íå ââåä¸òå 0: ";
		std::cin >> numbers;

		if (numbers != 0) {
			sum += numbers;
			if (int(numbers) % 2 == 0) {
				sumEven += numbers;
			}
			else
			{
				sumOdd += numbers;
			}
		}

	}  while (numbers != 0);
	sum += numbers;
	if (int(numbers) % 2 == 0) {
		sumEven += numbers;
	}
	else
	{
		sumOdd += numbers;
	}
	
	std::cout << "Ñóììà ââåä¸ííûõ ÷èñåë: " << sum << "\n";
	std::cout << "Ñóììà ÷¸òíûõ ÷èñåë: " << sumEven << "\n";
	std::cout << "Ñóììà íå÷¸òíûõ ÷èñåë: " << sumOdd << "\n";

	return 0;
}
