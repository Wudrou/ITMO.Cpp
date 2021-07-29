#include <iostream>
#include "Dot.h"
#include "Triangle.h"

using namespace std;

int main()
{
    system("chcp 1251");
    system("cls");

    double x, y;
    cout << "Введите координаты вершин треугольника: " << endl;
    cout << "Вершина a (x y) = ";
    cin >> x >> y;
    Dot a(x, y);
    cout << "Вершина b (x y) = ";
    cin >> x >> y;
    Dot b(x, y);
    cout << "Вершина c (x y) = ";
    cin >> x >> y;
    Dot c(x, y);

    Triangle* t = new Triangle(a, b, c);
    t->ShowSides();
    cout << "Периметр треугольника = " << t->Perimeter() << endl;
    cout << "Площадь треугольника = " << t->Square() << endl;
}