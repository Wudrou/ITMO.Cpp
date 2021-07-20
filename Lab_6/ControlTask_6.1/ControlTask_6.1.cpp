#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    system("chcp 1251");
    system("cls");
    char ch;
    cout << "Введите стихотворение, чтобы закончить ввод перейдите на новую строку и нажмите Ctrl+Z -> Enter." << endl;
    ofstream out("text.txt", ios::out | ios::binary);
    if (!out)
    {
        cout << "Файл открыть невозможно\n";
        return 1;
    }
    while (cin.get(ch))
    {
        out << ch;
    }
    out.close();
}