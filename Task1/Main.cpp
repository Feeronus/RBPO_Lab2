#include <iostream>
#include <windows.h>

import student_1bib21055_Lab2_Variant17_Task1;
import student_1bib21055_Lab2_Variant17_Task2;
import student_1bib21055_Lab2_Variant17_Task3;
import student_1bib21055_Lab2_Variant17_Task4;
import student_1bib21055_Lab2_Variant17_Task5;


using namespace std;

int main()
{
	setlocale(0, "");
	int select;
	int continue_num;
	while(true)
	{
		cout << "Выберите выполняемое задание 1-5: ";
		cin >> select;
		switch (select)
		{
		case(1):
		{
			cout << "Лабораторная работа 2 Репников М.А. вариант 17" << endl;
			cout << "Задание 1" << endl;
			double x;
			cout << "Введите параметр x: ";
			cin >> x;
			cout << "f1 = " << RBPO::Lab2::Variant17::Task1::funcF1(x) << endl;
			cout << "f2 = " << RBPO::Lab2::Variant17::Task1::funcF2(x) << endl;
			int n;
			cout << "Введите количество элементов суммы n: ";
			cin >> n;
			cout << "f3 = " << RBPO::Lab2::Variant17::Task1::funcF3(n) << endl;
			double e = 0;
			cout << "Введите точность e: ";
			cin >> e;
			cout << "f4 = " << RBPO::Lab2::Variant17::Task1::funcF4(e) << endl;
			break;
		}
		case(2):
		{
			cout << "Лабораторная работа 2 Репников М.А. вариант 17" << endl;
			cout << "Задание 2" << endl;
			double x;
			cout << "Введите параметр x: ";
			cin >> x;
			cout << "f1 = " << RBPO::Lab2::Variant17::Task2::funcF1(x) << endl;
			cout << "f2 = " << RBPO::Lab2::Variant17::Task2::funcF2(x) << endl;
			int n;
			cout << "Введите количество элементов суммы n: ";
			cin >> n;
			cout << "f3 = " << RBPO::Lab2::Variant17::Task2::funcF3(n) << endl;
			double e = 0;
			cout << "Введите точность e: ";
			cin >> e;
			cout << "f4 = " << RBPO::Lab2::Variant17::Task2::funcF4(e) << endl;
			break;
		}
		case(3):
		{
			cout << "Лабораторная работа 2 Репников М.А. вариант 17" << endl;
			cout << "Задание 3" << endl;
			double x;
			cout << "Введите параметр x: ";
			cin >> x;
			cout << "f1 = " << RBPO::Lab2::Variant17::Task3::funcF1(x) << endl;
			cout << "f2 = " << RBPO::Lab2::Variant17::Task3::funcF2(x) << endl;
			int n;
			cout << "Введите количество элементов суммы n: ";
			cin >> n;
			cout << "f3 = " << RBPO::Lab2::Variant17::Task3::funcF3(n) << endl;
			double e = 0;
			cout << "Введите точность e: ";
			cin >> e;
			cout << "f4 = " << RBPO::Lab2::Variant17::Task3::funcF4(e) << endl;
			break;
		}
		case(4):
		{
			cout << "Лабораторная работа 2 Репников М.А. вариант 17" << endl;
			cout << "Задание 3" << endl;
			double x;
			cout << "Введите параметр x: ";
			cin >> x;
			cout << "f1 = " << RBPO::Lab2::Variant17::Task4::funcF1(x) << endl;
			cout << "f2 = " << RBPO::Lab2::Variant17::Task4::funcF2(x) << endl;
			int n;
			cout << "Введите количество элементов суммы n: ";
			cin >> n;
			cout << "f3 = " << RBPO::Lab2::Variant17::Task4::funcF3(n) << endl;
			double e = 0;
			cout << "Введите точность e: ";
			cin >> e;
			cout << "f4 = " << RBPO::Lab2::Variant17::Task4::funcF4(e) << endl;
			break;
		}
		case(5):
		{
			cout << "Лабораторная работа 2 Репников М.А. вариант 17" << endl;
			cout << "Задание 3" << endl;
			double x;
			cout << "Введите параметр x: ";
			cin >> x;
			cout << "f1 = " << RBPO::Lab2::Variant17::Task5::funcF1(x) << endl;
			cout << "f2 = " << RBPO::Lab2::Variant17::Task5::funcF2(x) << endl;
			int n;
			cout << "Введите количество элементов суммы n: ";
			cin >> n;
			cout << "f3 = " << RBPO::Lab2::Variant17::Task5::funcF3(n) << endl;
			double e = 0;
			cout << "Введите точность e: ";
			cin >> e;
			cout << "f4 = " << RBPO::Lab2::Variant17::Task5::funcF4(e) << endl;
			break;
		}
		}
		cout << "Продолжить испытания? 0/1: ";
		cin >> continue_num;
		if (continue_num == 0)
		{
			break;
			cout << "Выключаюсь";
			return 0;
		}
	}
	
}
