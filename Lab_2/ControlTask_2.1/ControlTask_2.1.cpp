#include <iostream>

using namespace std;

int main()
{
    system("chcp 1251");
    int year;
    cout << "Введите год: ";
    cin >> year;

    if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
        cout << "Год " << year << " високосный\n";
    else
        cout << "Ãîä " << year << " не високосный\n";
}