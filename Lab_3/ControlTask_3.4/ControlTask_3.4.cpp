#include <iostream>

using namespace std;

int RecursiveSum(int n)
{
    if (n == 1) return 5;
    else return (5 * n + RecursiveSum(n - 1));
}

int main()
{
    system("chcp 1251");
    system("cls");
    int n;
    cout << "Введите значение для вычисления суммы ряда вида S=5+10+15+...+5*n: " << endl;
    cin >> n;

    if (n > 0)
    {
        cout << "Сумма = " << RecursiveSum(n) << endl;
    }
    else cout << "Ошибка ввода значения. Повторите еще раз." << endl;
}