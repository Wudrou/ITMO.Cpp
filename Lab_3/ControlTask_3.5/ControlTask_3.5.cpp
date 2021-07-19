#include <iostream>

using namespace std;

void RecursiveBinaryCode(int num)
{
    if (num == 1) cout << "1";
    else
    {
        RecursiveBinaryCode(num / 2);
        cout << num % 2;
    }
}

int main()
{
    system("chcp 1251");
    system("cls");
    int num;
    cout << "Введите целое положительное десятичное число для перевода в двоичную систему: " << endl;
    cin >> num;
    if (num >= 1)
    {
        RecursiveBinaryCode(num);
    }
    else if (num < 0)
    {
        cout << "Ошибка ввода значения. Повторите еще раз" << endl;
    }
    else
    {
        cout << "Ответ: " << num << endl;
    }
}