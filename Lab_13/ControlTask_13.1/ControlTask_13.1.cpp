#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

class human
{
private:
	string last_name;
	string name;
	string second_name;
public:
	human(string last_name, string name, string second_name)
	{
		this->last_name = last_name;
		this->name = name;
		this->second_name = second_name;
	}
	virtual string get_info()
	{
		ostringstream full_name;
		full_name << this->last_name << " " << this->name << " " << this->second_name;
		return full_name.str();
	}
};

class student : public human
{
private:
	vector<int> scores;
public:
	student(string last_name, string name, string second_name, vector<int> scores) : human(last_name, name, second_name)
	{
		this->scores = scores;
	}

	string get_info()
	{
		unsigned int count_scores = this->scores.size();
		unsigned int sum_scores = 0;

		for (unsigned int i = 0; i < count_scores; i++)
		{
			sum_scores += this->scores[i];
		}
		ostringstream full_info;
		full_info << human::get_info() << endl << "Средний балл: " << (float)sum_scores / (float)count_scores << endl;
		return full_info.str();
	}
};

class teacher : public human
{
private:
	unsigned int work_time;
public:
	teacher(string last_name, string name, string second_name, unsigned int work_time) : human(last_name, name, second_name)
	{
		this->work_time = work_time;
	}

	string get_info()
	{
		ostringstream full_info;
		full_info << human::get_info() << endl << "Количество часов: " << work_time << endl;
		return full_info.str();
	}
};

int main()
{
	system("chcp 1251");
	system("cls");
	vector<int> scores;
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(4);
	scores.push_back(4);
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);

	human* h1 = new student("Иванов", "Иван", "Иванович", scores);
	cout << h1->get_info();

	unsigned int teacher_work_time = 40;
	human* h2 = new teacher("Петров", "Петр", "Петрович", teacher_work_time);
	cout << h2->get_info();
}