// Laboratorna 3.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Манькевич Дар'я
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 10

#include <iostream>

using namespace std;

int main()
{
	double R; // радіус кола
	double a; // Довжина прямокутника
	double b; // висота прямокутника
	double x; // вхідний аргумент
	double y; // вхідний параметр

	
	cout << "R = "; cin >> R;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	

	// розгалуження в повній формі
	if  ((a > R && b < R) && ( y >= - sqrt((R * R) - (x * x)) && y >= -b && y < 0 && x <= 0 && x >= -R) || 
		 (y*y > ((R * R) - (x * x)) && y <= b && y > 0 && x < R && x <= a))
		cout << "yes" << endl; 
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
