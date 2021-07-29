#include <iostream>

using namespace std;

struct Time
{
    int hours;
    int minutes;
    int seconds;

    int timeInSec(const Time& time)
    {
        return time.hours * 3600 + time.minutes * 60 + time.seconds;
    }

    void showTime()
    {
        cout << "Часы: " << hours  << ", минуты: "<< minutes  << ", секунды: " << seconds << endl;
    }

    Time sum(Time& t1, Time& t2)
    {
        Time sumTime;
        int sumSec = timeInSec(t1) + timeInSec(t2);
        sumTime.hours = sumSec / 3600;
        sumSec = sumSec % 3600;
        sumTime.minutes = sumSec / 60;
        sumTime.seconds = sumSec % 60;
        return sumTime;
    }

    Time diff(Time& t1, Time& t2)
    {
        Time diffTime;
        int diffSec = abs(timeInSec(t1) - timeInSec(t2));
        diffTime.hours = diffSec / 3600;
        diffSec = diffSec % 3600;
        diffTime.minutes = diffSec / 60;
        diffTime.seconds = diffSec % 60;
        return diffTime;
    }
};

Time inputTime()
{
    Time time;
    while (true)
    {
        cout << "Введите время в формате 00 00 00" << endl;
        cin >> time.hours >> time.minutes >> time.seconds;
        if ((time.hours < 0 || time.hours >23) || (time.minutes < 0 || time.minutes > 59) || (time.seconds < 0 || time.seconds > 59))
        {
            cin.clear();
            cout << "Неверный формат времени." << endl;
        }
        else
        {
            break;
        }
    }
    return time;
}

int main()
{
    system("chcp 1251");
    system("cls");

    cout << "Введите первое время: \n";
    Time t1 = inputTime();
    cout << "Время в секундах: " << t1.timeInSec(t1) << endl << endl;

    cout << "Введите второе время: \n";
    Time t2 = inputTime();
    cout << "Время в секундах: " << t2.timeInSec(t2) << endl;

    cout << endl;

    Time tS = tS.sum(t1, t2);
    cout << "Сумма интервалов времени: ";
    tS.showTime();
    cout << endl;

    Time tD = tD.diff(t1, t2);
    cout << "Разница интервалов времени: ";
    tD.showTime();
    cout << endl;
}