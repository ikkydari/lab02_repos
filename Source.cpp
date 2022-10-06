#include <iostream>
using namespace std;
#include <cmath>
int main()
{
	double x; // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу
	double znamennyk1; //заменник для 1 виразу
	double chyselnyk1; //чисельник для 1 виразу
	cout  << "Enter x, please "; cin >> x;
	znamennyk1 = pow(x, 2) + 2 * x - 3 + (x-1)*(sqrt(pow(x,2)-9));
	z1 = znamennyk1/chyselnyk1;
	z2 = x + x;
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	system("pause");
	return 0;
}
