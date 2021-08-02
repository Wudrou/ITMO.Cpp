#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

class Point
{
private:
    double x;
    double y;
public:
    Point(double px, double py) : x(px), y(py) { }

    double get_distance()
    {
        return sqrt(pow(x - 0, 2) + pow(y - 0, 2));
    }
    friend ostream& operator<< (ostream& out, Point& a);
};

ostream& operator<< (ostream& out, Point& a)
{
    out << "Point(" << a.x << ", " << a.y << ") = " << a.get_distance();
    return out;
}

bool operator< (Point& a, Point& b)
{
    return a.get_distance() < b.get_distance();
}

int main()
{
    vector<Point> v;
    v.push_back(Point(1, 2));
    v.push_back(Point(10, 12));
    v.push_back(Point(21, 7));
    v.push_back(Point(4, 8));

    sort(v.begin(), v.end());
    for (auto& point : v)
        cout << point << "\n";
    return 0;
}