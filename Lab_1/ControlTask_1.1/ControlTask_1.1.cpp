﻿#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    system("chcp 1251");
    double x1, x2, x3, x4, x5;
    double y1, y2, y3, y4, y5;
    double Square;

    cout << "Введите координаты вершин:\n";
    cout << "P1: ";
    cin >> x1 >> y1;
    cout << "P2: ";
    cin >> x2 >> y2;
    cout << "P3: ";
    cin >> x3 >> y3;
    cout << "P4: ";
    cin >> x4 >> y4;
    cout << "P5: ";
    cin >> x5 >> y5;

    Square = 0.5 * abs(x1 * y2 + x2 * y3 + x3 * y4 + x4 * y5 + x5 * y1 - x2 * y1 - x3 * y2 - x4 * y3 - x5 * y4 - x1 * y5);
    cout << "Площадь пятиугольника равна: " << Square << endl;

}