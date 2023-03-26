#include <iostream>
#include <cmath>
#include <windows.h>
#include "Cone.h"
#include "Truncated_Cone.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	Cone c1(1, 2, 3, 4, 5);
	Truncated_Cone c2(1, 2, 3, 4, 5, 6);
	cout << "Площадь полной поверхности конуса: " << c1.area() << endl;
	cout << "Объем конуса: " << c1.volume() << endl;
	cout << "Площадь полной поверхности усеченного конуса: " << c2.area() << endl;
	cout << "Объем усеченного конуса: " << c2.volume() << endl;
	cout << endl;



	Cone c3;
	cout << "Введите координаты центра (x,y,z): ";
	double x, y, z;
	cin >> x >> y >> z;
	c3.setCoordinate(x, y, z);
	cout << "Введите радиус и высоту конуса: ";
	double r, h;
	cin >> r >> h;
	c3.setRadius(r);
	c3.setHeight(h);
	cout << endl;
	cout << " >> Фигура 3" << endl;
	c3.print();
	cout << endl;

	Truncated_Cone c4(x, y, z, r, 3, h);
	Truncated_Cone c5(x, y, z, r, 4, h);
	Truncated_Cone c6(x, y, z, r, 5, h);
	cout << " >> Фигура 4" << c4 << endl;
	cout << " >> Фигура 5" << c5 << endl;
	cout << " >> Фигура 6" << c6 << endl;
	cout << endl;

	
	cout << "c2 != c6: " << (c2 != c6 ? "Да" : "Нет") << endl;
	cout << "c2 > c6 : " << (c2 > c6 ? "Да" : "Нет") << endl;
	cout << "c2 < c6 : " << (c2 < c6 ? "Да" : "Нет") << endl;
	cout << "c2 >= c6: " << (c2 >= c6 ? "Да" : "Нет") << endl;
	cout << "c2 <= c6: " << (c2 <= c6 ? "Да" : "Нет") << endl;

	return 0;
}
