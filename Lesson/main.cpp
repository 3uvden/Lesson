#include <iostream>
#include <Windows.h>
#include <string>


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//float numbers = 0;
	//float sum = 0;
	//float sumEven = 0;
	//float sumOdd = 0;
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
	/*do {
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
	std::cout << "����� �������� �����: " << sumOdd << "\n";*/

	float dollar = 92.86;
	float euro = 103.41;
	float yuan = 13.22;
	float Farit = 37;
	float yen = 0.646223;
	int currency = 0;
	float rubles = 0;
	char answer;
	float exchangeRate = 0.0;
	std::string currencyName;


	std::cout << "����� �����:\n";
	std::cout << "----------------------\n";
	std::cout << "| 1 ������ - 92,86�  |\n";
	std::cout << "| 1 ���� - 103,41�   |\n";
	std::cout << "| 1 ���� - 13,22�    |\n";
	std::cout << "| 1 ����� - 37�      |\n";
	std::cout << "| 1 ��� - 0,646223�  |\n";
	std::cout << "|--------------------|\n";
	std::cout << "| �������� - 5%      |\n";
	std::cout << "----------------------\n";
	std::cout << "1.������\n";
	std::cout << "2.����\n";
	std::cout << "3.����\n";
	std::cout << "4.�����\n";
	std::cout << "5.���\n";
	std::cout << "�������� ������: ";
	std::cin >> currency;
	if (currency < 1 || currency > 6)
	{
		std::cout << "������! ������� ����� �� 1 �� 5\n";
	} else
	{
		std::cout << "������� ���-�� ������: ";
		std::cin >> rubles;
	}
	std::cout << "�� ����������� �������� " << rubles << " ������?[y/n]";
	std::cin >> answer;
	if (answer == 'y' || answer == 'Y') {
		float exchangeRate = 0;
		std::string currencyName;

		if (currency == 1) {
			exchangeRate = dollar;
			currencyName = "��������";
		}
		else if (currency == 2) {
			exchangeRate = euro;
			currencyName = "����";
		}
		else if (currency == 3) {
			exchangeRate = yuan;
			currencyName = "�����";
		}
		else if (currency == 4) {
			exchangeRate = Farit;
			currencyName = "�������";
		}
		else if (currency == 5) {
			exchangeRate = yen;
			currencyName = "���";
		}

		float amountAfterCommission = rubles * (1 - 0.05);
		float exchangedAmount = amountAfterCommission / exchangeRate;

		std::cout << "�� �������� " << rubles << " ������ �� " << exchangedAmount << " " << currencyName << ".\n";
	}
	else {
		std::cout << "����� ������.\n";
	}
	
	return 0;
}
