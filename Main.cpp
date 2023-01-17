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
		cout << "Выберите необходимую операцию (+ - * / ! ^) или введите (q) для выхода.\n";
		cin >> oper;
		if (oper == 'q' || oper == 'Q') break;
		if (oper != '+' && oper != '-' && oper != '*' && oper != '/' && oper != '!' && oper != '^') {
			cout << "Операция выбрана не корректно, повторите попытку\n";
			system("pause");
			continue;
		}
		if (oper == '!') {
			cout << "Введите число для поиска факториала (до 25): ";//больше 25 даже long long не выдерживает.
			cin >> a;
			if (a < 0) {
				cout << "Факториала отрицательных чисел нет.\n";
				system("pause");
				continue;
			}
			cout << "Факториал числа " << a << " равен " << factorial(a) << endl;
			system("pause");
			continue;
		}
		if (oper == '^') {
			cout << "Введите число: ";
			cin >> a;
			cout << "Введите степень: ";
			cin >> b;
			if (b == 0) {
				cout << a << " в степени 0 равно " << 1<<endl;
				system("pause");
				continue;
			}
			if (b < 0) {
				cout << a << " в степени " << b << " равно " << (double)1 / stepen(a, -b) << endl;
				system("pause");
				continue;
			}
			cout << a << " в степени " << b << " равно " << stepen(a, b) << endl;
			system("pause");
			continue;
		}
		cout << "Введите два числа: ";
		cin >> a >> b;
		if (oper == '/') {
			if (b == 0) {
				cout << "Делить на 0 нельзя\n";
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