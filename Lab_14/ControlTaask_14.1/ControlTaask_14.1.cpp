#include <iostream>
using namespace std;

template<class T>
T average_value(T arr[], int size)
{
    T sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum / size;
}
template<class T>
void getdata(T arr[], int size)
{
    for (int i = 0; i < size; i++) cout << arr[i] << ";";
    cout << " - среднее значение: " << average_value(arr, size) << endl;
}

int main()
{
    system("chcp 1251");
    system("cls");
    int arr[] = { 9,3,17,6,5,4,31,2,12 };
    double arrd[] = { 2.1,2.3,1.7,6.6,5.3,2.44,3.1,2.4,1.2 };
    char arrc[] = "Привет, мир!";
    int k1 = sizeof(arr) / sizeof(arr[0]);
    int k2 = sizeof(arrd) / sizeof(arrd[0]);
    int k3 = sizeof(arrc) / sizeof(arrc[0]) - 1;

    getdata(arr, k1);
    getdata(arrd, k2);
    getdata(arrc, k3);
}