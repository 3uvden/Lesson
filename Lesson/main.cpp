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
		std::cout << "������� ����� �����, ���� �� ������ 0: ";
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
	
	std::cout << "����� �������� �����: " << sum << "\n";
	std::cout << "����� ������ �����: " << sumEven << "\n";
	std::cout << "����� �������� �����: " << sumOdd << "\n";

	return 0;
}
