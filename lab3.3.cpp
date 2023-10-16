// Lab_03_3.cpp
// < Чухрай Олександр >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 13
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; 
		double R; 
	double y{}; 
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі
	if (x<=0)
		y = 3;
	else
		if (0 < x && x < 6)
			y = -(1.0/2.0)*x+3;
		else
			if (0 < x && x <= 3)
				y = sqrt(9-(x-0)*(x-0));
			else if (x>6)
					y = -(x-6);
	 
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}