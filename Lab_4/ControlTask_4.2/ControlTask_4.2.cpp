#include <iostream>

using namespace std;

bool Input(int& a, int& b)
{
    cout << "Input A and B: ";
    cin >> a >> b;
    if (a % 2 == 0 and b % 2 == 0) return true;
    else return false;
}

int main()
{
    int a, b;
    if (Input(a, b) == false)
    {
        cerr << "error" << endl;
        return 1;
    }
    int s = a + b;
    cout << "A + B = " << s << endl;
    return 0;
}