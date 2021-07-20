#include <iostream>
#include <cmath>

using namespace std;

int Myroot(double, double, double, double&, double&);

int main()
{
    system("chcp 1251");
    system("cls");
    double a, b, c;
    double x1, x2;
    cout << "Вычисление корней квадратного уравнения.\n";
    cout << "Введите коэффициенты a, b, c: ";
    cin >> a >> b >> c;

    switch (Myroot(a, b, c, x1, x2))
    {
    case 1:
        cout << "Уравнение имеет 2 корня.\nx1 = " << x1 << "\nx2 = " << x2 << endl;
        break;
    case 0:
        cout << "Уравнение имеет 1 корень.\nx = " << x1 << endl;
        break;
    case -1:
        cout << "Уравнение не имеет корней." << endl;
    }
    return 0;
}

int Myroot(double a, double b, double c, double& x1, double& x2)
{
    double D;
    D = pow(b, 2) - 4 * a * c;
    if (D > 0)
    {
        x1 = ((-b) + sqrt(D)) / (2 * a);
        x2 = ((-b) - sqrt(D)) / (2 * a);
        return 1;
    }
    if (D == 0)
    {
        x1 = x2 = -(b / (2 * a));
        return 0;
    }
    if (D < 0)
    {
        return -1;
    }
}