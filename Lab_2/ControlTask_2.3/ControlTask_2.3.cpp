#include <iostream>

using namespace std;

int main()
{
	system("chcp 1251");
	double sum;
	double coins[] = {1000, 500, 200, 100, 50, 25, 10, 5, 1};   // монеты в копейках
	cout << "Сколько рублей меняем на монеты (можно ввести нецелое число): \n";
	cin >> sum;
	sum = sum * 100; // конвертируем ввод в копейки
	int i = 0;
	int quantity;
	if (sum == 0 || sum < 0)
	{
		cout << endl << "Менять нечего! Надо заработать прежде чем менять!" << endl;
	}
	else
	{
		cout << endl << "Сумма  " << sum/100 << "  содержит \n";
		while (sum > 0)
		{
			if (sum >= coins[i])
			{
				quantity = sum / coins[i];
				cout << "Монет номиналом " << coins[i]/100 << " руб.: " << quantity << " шт." << endl;
				sum = sum - quantity * coins[i];
				i++;
			}
			else
			{
				i++;
			}
		}
	}
}