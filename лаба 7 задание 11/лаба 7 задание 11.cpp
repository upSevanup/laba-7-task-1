#include <iostream>
#include <clocale>

using namespace std;

double f1(double a, double h);
void f2(double a, double h, double* out);
void f3(double a, double h, double& out);

/*
* Лабораторная работа 7. Поливцев Михаил, ИВТ-31. Задание 1. Индивидуальный вариант задания 16.
* Написать функцию f(a,h), вычисляющую и возвращающую периметр равнобедренного треугольника
* по его основанию a и высоте h.
*/

int main() {
	setlocale(LC_ALL, "ru");

	double a, h, res1, res2, res3;
	cout << "Введите основание и высоту треугольника >> ";
	cin >> a >> h;

	res1 = f1(a, h);
	f2(a, h, &res2);
	f3(a, h, res3);

	cout << "P1 = " << res1 << endl;
	cout << "P2 = " << res2 << endl;
	cout << "P3 = " << res3 << endl;
}

double f1(double a, double h) {
	return 0.5 * a * h;
}

void f2(double a, double h, double* out) {
	*out = 0.5 * a * h;
}

void f3(double a, double h, double& out) {
	out = 0.5 * a * h;
}