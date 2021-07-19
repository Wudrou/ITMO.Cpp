#include <iostream>
#include <cmath>
using namespace std;

double SquareTriangle(double);
double SquareTriangle(double, double, double);

int main()
{
    system("chcp 1251");
    system("cls");
    int choice;
    double a, b, c;
    cout << "Рассчет площади треугольника двух типов: равностороннего и разностороннего.\n";
    cout << "Площадь какого треугольника вы хотите рассчитать? Выберите номер\n1.Равностороннего\n2.Разностороннего\n";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Введите значение стороны равностороннего треугольника: " << endl;
        cin >> a;
        cout << "Площадь = " << SquareTriangle(a) << endl;
        break;
    case 2:
        cout << "Введите значение сторон разностороннего треугольника: " << endl;
        cin >> a >> b >> c;
        cout << "Площадь = " << SquareTriangle(a, b, c) << endl;
        break;
    default:
        cout << "Ошибка выбора. Повторите еще раз." << endl;
    }
}

double SquareTriangle(double a)
{
    double semiPerimeter = (a * 3) / 2;
    return sqrt(semiPerimeter * pow(semiPerimeter - a, 3));
}

double SquareTriangle(double a, double b, double c)
{
    double semiPerimeter = (a + b + c) / 2;
    return sqrt(semiPerimeter * (semiPerimeter - a) * (semiPerimeter - b) * (semiPerimeter - c));
}