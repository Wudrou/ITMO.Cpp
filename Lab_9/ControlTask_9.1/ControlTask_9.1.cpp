#include <iostream>
#include <cmath>

using namespace std;

class SidesTriangleError
{
public:
    SidesTriangleError() : message("Сумма двух сторон не может быть меньше третьей.") {}
    void printMessage() const { cout << message << endl; }
private:
    string message;
};

class Triangle
{
public:
    Triangle(double side1, double side2, double side3)
    {
        a = side1;
        b = side2;
        c = side3;
        if ((a + b < c) || (a + c < b) || (b + c < a))
            throw SidesTriangleError();
    }
    void SquareTriangle()
    {
        double semiPerimeter = (a + b + c) / 2;
        cout << sqrt(semiPerimeter * (semiPerimeter - a) * (semiPerimeter - b) * (semiPerimeter - c));
    }
private:
    double a;
    double b;
    double c;
};

int main()
{
    system("chcp 1251");
    system("cls");
    double a, b, c;
    cout << "Введите значение сторон треугольника:" << endl;
    cin >> a >> b >> c;

    try
    {
        Triangle t(a, b, c);
        cout << "Площадь = ";
        t.SquareTriangle();
        cout << endl;
    }
    catch (SidesTriangleError& error)
    {
        cout << "Ошибка: ";
        error.printMessage();
        return 1;
    }
}