#include <iostream>
#include <Windows.h>
#include "Calculate.h"

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char oper;
	int a, b;
	while (true) {
		system("cls");
		cout << "�������� ����������� �������� (+ - * / ! ^) ��� ������� (q) ��� ������.\n";
		cin >> oper;
		if (oper == 'q' || oper == 'Q') break;
		if (oper != '+' && oper != '-' && oper != '*' && oper != '/' && oper != '!' && oper != '^') {
			cout << "�������� ������� �� ���������, ��������� �������\n";
			system("pause");
			continue;
		}
		if (oper == '!') {
			cout << "������� ����� ��� ������ ���������� (�� 25): ";//������ 25 ���� long long �� �����������.
			cin >> a;
			if (a < 0) {
				cout << "���������� ������������� ����� ���.\n";
				system("pause");
				continue;
			}
			cout << "��������� ����� " << a << " ����� " << factorial(a) << endl;
			system("pause");
			continue;
		}
		if (oper == '^') {
			cout << "������� �����: ";
			cin >> a;
			cout << "������� �������: ";
			cin >> b;
			if (b == 0) {
				cout << a << " � ������� 0 ����� " << 1<<endl;
				system("pause");
				continue;
			}
			if (b < 0) {
				cout << a << " � ������� " << b << " ����� " << (double)1 / stepen(a, -b) << endl;
				system("pause");
				continue;
			}
			cout << a << " � ������� " << b << " ����� " << stepen(a, b) << endl;
			system("pause");
			continue;
		}
		cout << "������� ��� �����: ";
		cin >> a >> b;
		if (oper == '/') {
			if (b == 0) {
				cout << "������ �� 0 ������\n";
				system("pause");
				continue;
			}
		}
		cout << a << " " << oper << " " << b << " = " << operaciya(a, b, oper)<<endl;
		system("pause");
		continue;
	}
	return 0;
}