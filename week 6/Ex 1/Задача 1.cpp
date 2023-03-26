#include <iostream>
#include <cmath>
#include "Cone.h"

using namespace std;
 
int main()
{
    setlocale(LC_ALL, "");
 
    cout << "Введите радиус и высоту конуса: ";
    double r, h;
    cin >> r >> h;
    Cone c1(r, h);



    cout << "Введите координаты центра основания, радиус и высоту конуса: ";
    double x, y, z;
    cin >> x >> y >> z >> r >> h;
    Cone c2(x, y, z, r, h);

    
    cout << endl << "Конус 1 " << endl;
    c1.print();
    cout << "Площадь полной поверхности: " << c1.area() << endl;
    cout << "Объем: " << c1.volume() << endl;


    cout << endl << "Конус 2 " << endl;
    c2.print();
    cout << "Площадь полной поверхности: " << c2.area() << endl;
    cout << "Объем: " << c2.volume() << endl;



    Cone* c3 = new Cone();
    cout << endl << "Произвольный конус " << endl;
    cout << "Введите координаты центра основания, радиус и высоту конуса: " << endl;
    cin >> x >> y >> z >> r >> h;
    c3->setCoordinate(x, y, z);
    c3->setRadius(r);
    c3->setHeight(h);
    c3->print();
    delete c3;



    int n = 3;
    Cone* mas = new Cone[n];
    for (int i = 0; i < n; i++) {
        cout << endl << "Введите координаты центра основания, радиус и высоту " << i+1 << " конуса: " << endl;
		cin >> x >> y >> z >> r >> h;
		mas[i].setCoordinate(x, y, z);
		mas[i].setRadius(r);
		mas[i].setHeight(h);
	}

    for (int i = 0; i < n; i++) {
		cout << endl << "Конус " << i + 1 << endl;
		mas[i].print();
		cout << "Площадь полной поверхности: " << mas[i].area() << endl;
		cout << "Объем: " << mas[i].volume() << endl;
	}

    delete[] mas;

    return 0;
}