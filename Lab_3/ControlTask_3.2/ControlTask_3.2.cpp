#include <iostream>
#include <cmath>

using namespace std;

double CubicRoot(double);

int main()
{
    system("chcp 1251");
    system("cls");

    double a;
    cout << "Вычислениет кубический корень в двух вариантах.\n";
    cout << "Введите число: ";
    cin >> a;

    cout << "Первый вариант: " << pow(a, 1.0 / 3) << endl;
    cout << "Второй вариант: " << CubicRoot(a) << endl;

    return 0;
}

double CubicRoot(double a)
{
    double start = 0;
    double finish = a / 3;
    while (start != finish)
    {
        start = finish;
        finish = (1.0 / 3) * (a / (finish * finish) + 2 * finish);
    }
    return start;
}