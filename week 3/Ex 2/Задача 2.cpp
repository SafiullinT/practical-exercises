#include <iostream>
#include <locale>
#include "rational.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите количество дробей: ";
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
	delete[] arr;
	return 0;
}