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
		cout << "�������� ����������� ������� 1-5: ";
		cin >> select;
		switch (select)
		{
		case(1):
		{
			cout << "������������ ������ 2 �������� �.�. ������� 17" << endl;
			cout << "������� 1" << endl;
			double x;
			cout << "������� �������� x: ";
			cin >> x;
			cout << "f1 = " << RBPO::Lab2::Variant17::Task1::funcF1(x) << endl;
			cout << "f2 = " << RBPO::Lab2::Variant17::Task1::funcF2(x) << endl;
			int n;
			cout << "������� ���������� ��������� ����� n: ";
			cin >> n;
			cout << "f3 = " << RBPO::Lab2::Variant17::Task1::funcF3(n) << endl;
			double e = 0;
			cout << "������� �������� e: ";
			cin >> e;
			cout << "f4 = " << RBPO::Lab2::Variant17::Task1::funcF4(e) << endl;
			break;
		}
		case(2):
		{
			cout << "������������ ������ 2 �������� �.�. ������� 17" << endl;
			cout << "������� 2" << endl;
			double x;
			cout << "������� �������� x: ";
			cin >> x;
			cout << "f1 = " << RBPO::Lab2::Variant17::Task2::funcF1(x) << endl;
			cout << "f2 = " << RBPO::Lab2::Variant17::Task2::funcF2(x) << endl;
			int n;
			cout << "������� ���������� ��������� ����� n: ";
			cin >> n;
			cout << "f3 = " << RBPO::Lab2::Variant17::Task2::funcF3(n) << endl;
			double e = 0;
			cout << "������� �������� e: ";
			cin >> e;
			cout << "f4 = " << RBPO::Lab2::Variant17::Task2::funcF4(e) << endl;
			break;
		}
		case(3):
		{
			cout << "������������ ������ 2 �������� �.�. ������� 17" << endl;
			cout << "������� 3" << endl;
			double x;
			cout << "������� �������� x: ";
			cin >> x;
			cout << "f1 = " << RBPO::Lab2::Variant17::Task3::funcF1(x) << endl;
			cout << "f2 = " << RBPO::Lab2::Variant17::Task3::funcF2(x) << endl;
			int n;
			cout << "������� ���������� ��������� ����� n: ";
			cin >> n;
			cout << "f3 = " << RBPO::Lab2::Variant17::Task3::funcF3(n) << endl;
			double e = 0;
			cout << "������� �������� e: ";
			cin >> e;
			cout << "f4 = " << RBPO::Lab2::Variant17::Task3::funcF4(e) << endl;
			break;
		}
		case(4):
		{
			cout << "������������ ������ 2 �������� �.�. ������� 17" << endl;
			cout << "������� 3" << endl;
			double x;
			cout << "������� �������� x: ";
			cin >> x;
			cout << "f1 = " << RBPO::Lab2::Variant17::Task4::funcF1(x) << endl;
			cout << "f2 = " << RBPO::Lab2::Variant17::Task4::funcF2(x) << endl;
			int n;
			cout << "������� ���������� ��������� ����� n: ";
			cin >> n;
			cout << "f3 = " << RBPO::Lab2::Variant17::Task4::funcF3(n) << endl;
			double e = 0;
			cout << "������� �������� e: ";
			cin >> e;
			cout << "f4 = " << RBPO::Lab2::Variant17::Task4::funcF4(e) << endl;
			break;
		}
		case(5):
		{
			cout << "������������ ������ 2 �������� �.�. ������� 17" << endl;
			cout << "������� 3" << endl;
			double x;
			cout << "������� �������� x: ";
			cin >> x;
			cout << "f1 = " << RBPO::Lab2::Variant17::Task5::funcF1(x) << endl;
			cout << "f2 = " << RBPO::Lab2::Variant17::Task5::funcF2(x) << endl;
			int n;
			cout << "������� ���������� ��������� ����� n: ";
			cin >> n;
			cout << "f3 = " << RBPO::Lab2::Variant17::Task5::funcF3(n) << endl;
			double e = 0;
			cout << "������� �������� e: ";
			cin >> e;
			cout << "f4 = " << RBPO::Lab2::Variant17::Task5::funcF4(e) << endl;
			break;
		}
		}
		cout << "���������� ���������? 0/1: ";
		cin >> continue_num;
		if (continue_num == 0)
		{
			break;
			cout << "����������";
			return 0;
		}
	}
	
}
