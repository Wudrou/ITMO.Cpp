#include <iostream>
#include "time.h"

using namespace std;

int main()
{
    system("chcp 1251");
    system("cls");
    int h, m, s;
    cout << "Введите время в формате 00 00 00:" << endl;
    cin >> h >> m >> s;
    Time t1(h, m, s);
    t1.ShowTime();

    cout << "Введите время в формате 00 00 00:" << endl;
    cin >> h >> m >> s;
    Time t2(h, m, s);
    t2.ShowTime();

    Time t;
    t.SumTime(t1, t2);
    t.ShowTime();
}