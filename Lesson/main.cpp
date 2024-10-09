#include <iostream>
#include <cstdlib>
#include <Windows.h>



void FillArr(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 27 - 8;
	}
}

void PrintArr(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}

void MinMax(int arr[], int size, int& minIndex, int& min, int& maxIndex, int& max) {
	min = arr[0];
	max = arr[0];
	minIndex = 0;
	maxIndex = 0;

	for (int i = 1; i < size; i++) {
		if (arr[i] < min) {
			min = arr[i];
			minIndex = i;
		}
		if (arr[i] > max) {
			max = arr[i];
			maxIndex = i;
		}
	}
}

int main() {
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	
	const int size = 20;
	int arr[size];

	FillArr(arr, size);
	PrintArr(arr, size);

	int minIndex, min, maxIndex, max;
	MinMax(arr, size, minIndex, min, maxIndex, max);

	std::cout << "\n�������: ������ " << minIndex << " ����� " << min << "\n";
	std::cout << "��������: ������ " << maxIndex << " ����� " << max << "\n";



	/* float num1, num2;
char action;

int Add(int a, int b)
{
	int temp = a + b;
	return temp;
}

int Subtract(int a, int b)
{
	int temp = a - b;
	return temp;
}

float Multiply(float a, float b)
{
	float temp = a * b;
	return temp;
}

float Share(float a, float b)
{
	if (b != 0)
	{
		float temp = a / b;
		return temp;
	}
	else
	{
		std::cout << "������ �� 0 ������!";
		return 0;
	}
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));


	std::cout << "������� ������ �����: ";
	std::cin >> num1;

	std::cout << "������� �������� (+, -, *, /): ";
	std::cin >> action;

	std::cout << "������� ������ �����: ";
	std::cin >> num2;

		if (action == '+') {
			std::cout << "���������: " << Add(num1, num2) << "\n";
		}
		else if (action == '-') {
			std::cout << "���������: " << Subtract(num1, num2) << "\n";
		}
		else if (action == '*') {
			std::cout << "���������: " << Multiply(num1, num2) << "\n";
		}
		else if (action == '/' && num2 != 0) {
			std::cout << "���������: " << Share(num1, num2) << "\n";
		}
		else {
			std::cout << "�������� ��������!\n";
		}
		*/
	/*int arr1[10];
	int arr2[10];
	bool coincid = false;

	std::cout << "������� 10 ����� �� 0 �� 10\n";
	for (int i = 0; i < 10; i++) {
		int input;
		std::cout << "����� " << i + 1 << ": ";
		std::cin >> input;

		while (input < 0 || input > 10) {
			std::cout << "������: ����� ������ ���� � ��������� �� 0 �� 10. ���������� �����: ";
			std::cin >> input;
		}
		arr2[i] = input;
	}

	for (int i = 0; i < 10; i++) {
		arr1[i] = rand() % 11;
		std::cout << arr1[i] << " ";
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (arr1[i] == arr2[j]) {
				coincid = true;
				break;
			}
		}
	}

	if (coincid) {
		std::cout << "\n��� �������, � ��� ��������� ����� � ��������!\n";
	}*/
	/*int arr[20];

	for (int i = 0; i < 20; ++i)
	{
		arr[i] = rand() % 16 - 5;
	}

	for (int i = 0; i < 20; ++i)
	{
		std::cout << arr[i] << " ";
		if (i == 9)
		{
			std::cout << "\n";
		}
	}*/
	/*float numbers = 0;
	float sum = 0;
	float sumEven = 0;
	float sumOdd = 0;
	int a = 3;
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
	/*float dollar = 92.86;
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
		return 1;
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
	}*/
	
	return 0;
}
