#pragma once

class Time
{
public:
    Time();
    Time(int, int, int);
    void set_hours(int);
    void set_minutes(int);
    void set_seconds(int);
    int get_hours();
    int get_minutes();
    int get_seconds();
    void ShowTime();
    void SumTime(Time&, Time&);
private:
    int hours;
    int minutes;
    int seconds;
};
