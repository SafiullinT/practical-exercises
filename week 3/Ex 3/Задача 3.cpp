#include <iostream>
#include <locale>
#include "../Задача 2/rational.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите количество дробей(2 дроби и более): ";
	cin >> n;
	rational* arr = new rational[n];
	for (int i = 0; i < n; i++) {
		int a, b;
		cout << "Введите числитель и знаменатель дроби " << i + 1 << ": ";
		cin >> a >> b;
		arr[i].set(a, b);
	}
	for (int i = 0; i < n; i++) {
		arr[i].show();
		cout << endl;
	}

	rational sum;
	for (int i = 0; i < n; i++) {
		sum = sum + arr[i];
	}
	cout << "Сумма дробей: ";
	sum.show();
	cout << endl;

	rational diff = arr[0] - arr[1];
	cout << "Разность дробей: ";
	diff.show();
	cout << endl;

	cout << "Инкремент: ";
	arr[0]++;
	arr[0].show();
	cout << endl;

	cout << "Сравнение дробей: ";
	if (arr[0] > arr[1]) cout << "Первая дробь больше второй.";
	else if (arr[0] == arr[1]) cout << "Первая дробь равна второй.";
	else cout << "Первая дробь меньше второй.";

	arr[0] = arr[1];
	cout << endl << "Присваивание: ";
	arr[0].show();
	cout << endl;

	delete[] arr;
	return 0;
}