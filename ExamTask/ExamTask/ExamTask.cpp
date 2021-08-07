#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "SportShoes.h"
#include "SummerSeasonalShoes.h"
#include "WinterSeasonalShoes.h"

using namespace std;

class Work
{
private:
    int quantity;
    int type;
    string model;
    string name;
    float shoeSize = 0;
    vector<string> equipment;

public:
    void menu()
    {
        cout << "Лист учета обуви в магазине." << endl;
        cout << "Введите команду:" << endl;
        cout << "1. Добавить запись." << endl;
        cout << "2. Выход." << endl;
    }

    void doWork()
    {
        menu();
        int command;
        cin >> command;
        if (command == 1)
        {
            cout << endl << "Укажите количество записей для внесения в лист учета: ";
            cin >> quantity;
            for (int i = 0; i < quantity; i++)
            {
                cout << endl << "Запись №: " << i + 1 << endl;
                equipment.push_back(addEquipment());
            }
            unsigned int vSize = equipment.size();
            ofstream fout("AllList.txt", ios::out);
            cout << "Вносим записи в лист учета: " << endl;
            for (int i = 0; i < vSize; i++)
            {
                cout << equipment[i] << endl;
                fout << equipment[i] << endl;
            }
            fout.close();
            cout << "\nСписок сохранен в AllList.txt" << endl;
        }
        else if (command == 2)
        {
            cout << "Выходим..." << endl;;
        }
        else
        {
            cout << "Введена неверная команда" << endl;
        }
    }

    string addEquipment()
    {
        string info = "Ошибка выбора типа. Список не сохранен.";
        cout << "Введите название: ";
        cin >> name;
        cout << "Введите модель: ";
        cin >> model;
        cout << "Размер обуви: ";
        cin >> shoeSize;
        cout << endl << "Выберите тип использования (1-3):\n1.Для спортивного зала\n2.Для улицы(лето)\n3.Для улицы(зима)" << endl;
        cin >> type;
        if (type == 1)
        {
            SportShoes eq(name, model, shoeSize);
            info = eq.get_info();
        }
        else if (type == 2)
        {
            SummerSeasonalShoes eq(name, model, shoeSize);
            info = eq.get_info();
        }
        else if (type == 3)
        {
            WinterSeasonalShoes eq(name, model, shoeSize);
            info = eq.get_info();
        }
        return info;
    }
};

int main()
{
    system("chcp 1251");
    system("cls");
    Work start;
    start.doWork();
}