#include <iostream>
#include <math.h>

using namespace std;

struct Root
{
    double x1;
    double x2;
};

Root getRoots(double a, double b, double c)
{
    Root r;
    double d = b * b - 4 * a * c;
    if (d > 0)
    {
        r.x1 = ((-b) + sqrt(d)) / (2 * a);
        r.x2 = ((-b) - sqrt(d)) / (2 * a);
        return r;
    }
    else if (d == 0)
    {
        r.x1 = r.x2 = (-b) / (2 * a);
        return r;
    }
}

void printRoots(Root r)
{
    if (r.x1)
    {
        if (r.x1 != r.x2)
        {
            cout << "Корни квадратного уравнения:\n";
            cout << "x1 = " << r.x1 << ", x2 = " << r.x2 << endl;
        }
        else
        {
            cout << "Корень квадратного уравнения:\n";
            cout << "x = " << r.x1 << endl;
        }
    }
    else
    {
        cout << "Корней нет.\n";
    }
}

int main()
{
    system("chcp 1251");
    system("cls");

    double a, b, c;

    cout << "Введите коэффициены квадратного уравнения:" << endl;
    cin >> a >> b >> c;

    printRoots(getRoots(a, b, c));
}

