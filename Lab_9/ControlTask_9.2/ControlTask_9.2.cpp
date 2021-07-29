#include <iostream>
#include <string>

using namespace std;

class Time
{
public:
    class ExTime
    {
    public:
        string message;
        int value;

        ExTime(string mas, int val)
        {
            message = mas;
            value = val;
        }
    };
    Time()
    {
        set_hours(0);
        set_minutes(0);
        set_seconds(0);
    }

    Time(int h, int m, int s)
    {
        if (m > 59) throw ExTime("минуты", m);
        if (s > 59) throw ExTime("секунды", s);
        Time::set_hours(h);
        Time::set_minutes(m);
        Time::set_seconds(s);

    }
    void ShowTime()
    {
        cout << Time::get_hours() << ":" << Time::get_minutes() << ":" << Time::get_seconds() << endl;
    }
    void SumTime(Time& t1, Time& t2)
    {
        int h, m, s;
        h = t1.get_hours() + t2.get_hours();
        m = t1.get_minutes() + t2.get_minutes();
        s = t1.get_seconds() + t2.get_seconds();
        if (s > 59)
        {
            s -= 60;
            m++;
        }
        if (m > 59)
        {
            m -= 60;
            h++;
        }
        Time::set_hours(h);
        Time::set_minutes(m);
        Time::set_seconds(s);
    }

    void set_hours(int h) { Time::hours = h; }
    void set_minutes(int m) { Time::minutes = m; }
    void set_seconds(int s) { Time::seconds = s; }

    int get_hours() { return Time::hours; }
    int get_minutes() { return Time::minutes; }
    int get_seconds() { return Time::seconds; }

private:
    int hours;
    int minutes;
    int seconds;
};

int main()
{
    system("chcp 1251");
    system("cls");
    int h, m, s;
    try
    {
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
    catch (Time::ExTime& ex)
    {
        cout << "\nОшибка ввода: " << ex.message << endl;
        cout << "\nВведенное значение: " << ex.value << endl;
        return 1;
    }
    return 0;
}