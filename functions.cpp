#include <iostream>
#include <cstdlib>
#include <ctime>


int sum(int num1, int num2){
	return num1 + num2;
}

void hi() {
	std::cout << "Hello World! \n";
}

//функция вывода массива в консоль
void print_arr(int arr[], const int length) {
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ' ';
	std::cout << std::endl;
}

void mult_x5(int num) {   // num - параметр функции 
	num *= 5;
}

void arr_x5(int arr[]) {
	arr[1] *= 5;
}

void positive_el(int arr[], const int length) {
	for (int i = 0; i < length; i++)
		if (arr[i] > 0)
			std::cout << i << ' ';
	std::cout << std::endl;
}


unsigned long long factorial(int num) {
	unsigned long long result = 1;
	for (int i = 2; i <= num; i++)
		result *= i;
	return result;
}
int main() {
	setlocale(LC_ALL, "ru");
	int n, m;
	
	//создание и вызов функци
	
	hi();

	std::cout << "Введите два числа -> ";
	std::cin >> n >> m;
	std::cout << sum(n, m) << std::endl;
	

	// Функции, работающие с массивами
	
	const int size = 5;
	int arr[size]{ 7, 5, 42, 105, 15 };
	print_arr(arr, size);
	
	arr_x5(arr);
	print_arr(arr, size);

	n = 7;
	mult_x5(n); // n - аргумент функции 
	std::cout << n << std::endl;

	//Параметры - это переменные, необходимые функции
	//для принятия внешних значений передаваемых в функцию в момент ее вызова.
	//Аргументы - значения передаваемые в параметры функции в момент ее вызова, 
	// таким образом можно сказать что 
	// параметры - это лишь копии исходных передаваемых в функцию аргументов 

	// Если в функцию передается массив, то обращение внутри функции к его элементам
	//с целью их изменени повлечет за собой изменение самого массива, который был передан.
	// Иным словами массивы не копируются при передаче в функуию. Вместо этого просто получают 
	//новое имя.
	// Функция ВСЕГДА возвращает ОДНО и только ОДНО значение.
	

	// Задача 1. Индексы положительных элементов массива
	
	std::cout << "\tЗадача 1.\nМассив:\n";
	const int size1 = 5;
	int arr1[size1]{ 10, 0, 5, -7, 15 };
	print_arr(arr1, size1);
	std::cout << "Индексы положительных елементов : \n";
	positive_el(arr1, size1);
	std::cout << '\n';
	

	//Задача 2. Факториал
	std::cout << "\tЗадача 2.\nВведите число -> ";
	std::cin >> n;
	std:: cout << n << "! = " << factorial(n) << std::endl;

















	return 0;
}