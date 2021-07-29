#include <iostream>
#include "time.h"

using namespace std;

Time::Time()
{
	Time::set_hours(0);
	Time::set_minutes(0);
	Time::set_seconds(0);
}

Time::Time(int h, int m, int s)
{
	while (s >= 60)
	{
		s -= 60;
		m++;
	}
	while (m >= 60)
	{
		m -= 60;
		h++;
	}
	Time::set_hours(h);
	Time::set_minutes(m);
	Time::set_seconds(s);

}
void Time::ShowTime()
{
	cout << Time::get_hours() << ":" << Time::get_minutes() << ":" << Time::get_seconds() << endl;
}
void Time::SumTime(Time& t1, Time& t2)
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


void Time::set_hours(int h) { Time::hours = h; }
void Time::set_minutes(int m) { Time::minutes = m; }
void Time::set_seconds(int s) { Time::seconds = s; }
int Time::get_hours() { return Time::hours; }
int Time::get_minutes() { return Time::minutes; }
int Time::get_seconds() { return Time::seconds; }