#include <iostream>

using namespace std;

int main()
{
	system("chcp 1251");
	double x, y;
	int score = 0;
	int attempts = 0;
	while (score < 50)
	{
		cout << "Стреляй! Введи координаты x, y выстрела: " << endl;
		cin >> x >> y;
		if ((x >= -1 && x <= 1) && (y >= -1 && y <= 1))
		{
			score += 10;
			attempts += 1;
			cout << "В яблочко! Ты набрал 10 очков. Набрано очков: " << score << endl;
		}
		else if ((x >= -2 && x <= 2) && (y >= -2 && y <= 2))
		{
			score += 5;
			attempts += 1;
			cout << "Попал! Ты набрал 5 очков. Набрано очков: " << score << endl;
		}
		else
		{
			attempts += 1;
			cout << "Совсем мимо! Попробуй снова.";
		}
	}
	if (attempts == 5)
	{
		cout << endl << "Всего выстрелов: " << attempts << ". Ты снайпер!!!" << endl;
	}
	else if (attempts > 5 && attempts <= 10)
	{
		cout << endl << "Всего выстрелов: " << attempts << ". Ты стрелок" << endl;
	}
	else
	{
		cout << endl << "Всего выстрелов: " << attempts << ". Ты новичок, тренируйся!" << endl;
	}
}