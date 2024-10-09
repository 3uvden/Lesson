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

	std::cout << "\nМинимум: индекс " << minIndex << " число " << min << "\n";
	std::cout << "Максимум: индекс " << maxIndex << " число " << max << "\n";



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
		std::cout << "Делить на 0 нельзя!";
		return 0;
	}
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));


	std::cout << "Введите первое число: ";
	std::cin >> num1;

	std::cout << "Введите действие (+, -, *, /): ";
	std::cin >> action;

	std::cout << "Введите второе число: ";
	std::cin >> num2;

		if (action == '+') {
			std::cout << "Результат: " << Add(num1, num2) << "\n";
		}
		else if (action == '-') {
			std::cout << "Результат: " << Subtract(num1, num2) << "\n";
		}
		else if (action == '*') {
			std::cout << "Результат: " << Multiply(num1, num2) << "\n";
		}
		else if (action == '/' && num2 != 0) {
			std::cout << "Результат: " << Share(num1, num2) << "\n";
		}
		else {
			std::cout << "Неверное действие!\n";
		}
		*/
	/*int arr1[10];
	int arr2[10];
	bool coincid = false;

	std::cout << "Введите 10 чисел от 0 до 10\n";
	for (int i = 0; i < 10; i++) {
		int input;
		std::cout << "Число " << i + 1 << ": ";
		std::cin >> input;

		while (input < 0 || input > 10) {
			std::cout << "Ошибка: число должно быть в диапазоне от 0 до 10. Попробуйте снова: ";
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
		std::cout << "\nВам повезло, у вас совпадает число с рандомом!\n";
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
		std::cout << "Вводите любое число, пока не введёте 0: ";
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
	
	std::cout << "Сумма введённых чисел: " << sum << "\n";
	std::cout << "Сумма чётных чисел: " << sumEven << "\n";
	std::cout << "Сумма нечётных чисел: " << sumOdd << "\n";*/
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


	std::cout << "Курсы валют:\n";
	std::cout << "----------------------\n";
	std::cout << "| 1 Доллар - 92,86р  |\n";
	std::cout << "| 1 Евро - 103,41р   |\n";
	std::cout << "| 1 Юань - 13,22р    |\n";
	std::cout << "| 1 Фарит - 37р      |\n";
	std::cout << "| 1 Йен - 0,646223р  |\n";
	std::cout << "|--------------------|\n";
	std::cout << "| комиссия - 5%      |\n";
	std::cout << "----------------------\n";
	std::cout << "1.Доллар\n";
	std::cout << "2.Евро\n";
	std::cout << "3.Юань\n";
	std::cout << "4.Фарит\n";
	std::cout << "5.Йен\n";
	std::cout << "Выберите валюту: ";
	std::cin >> currency;
	if (currency < 1 || currency > 6)
	{
		std::cout << "Ошибка! Введите число от 1 до 5\n";
		return 1;
	} else
	{
		std::cout << "Введите кол-во рублей: ";
		std::cin >> rubles;
	}
	std::cout << "Вы собираетесь обменять " << rubles << " рублей?[y/n]";
	std::cin >> answer;
	if (answer == 'y' || answer == 'Y') {
		float exchangeRate = 0;
		std::string currencyName;

		if (currency == 1) {
			exchangeRate = dollar;
			currencyName = "долларов";
		}
		else if (currency == 2) {
			exchangeRate = euro;
			currencyName = "евро";
		}
		else if (currency == 3) {
			exchangeRate = yuan;
			currencyName = "юаней";
		}
		else if (currency == 4) {
			exchangeRate = Farit;
			currencyName = "фаритов";
		}
		else if (currency == 5) {
			exchangeRate = yen;
			currencyName = "йен";
		}

		float amountAfterCommission = rubles * (1 - 0.05);
		float exchangedAmount = amountAfterCommission / exchangeRate;

		std::cout << "Вы обменяли " << rubles << " рублей на " << exchangedAmount << " " << currencyName << ".\n";
	}
	else {
		std::cout << "Обмен отменён.\n";
	}*/
	
	return 0;
}
