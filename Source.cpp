#include <iostream>
using namespace std;
#include <cmath>
int main()
{
	double x; // ������� ��������
	double z1; // ��������� ���������� 1-�� ������
	double z2; // ��������� ���������� 2-�� ������
	double znamennyk1; //�������� ��� 1 ������
	double chyselnyk1; //��������� ��� 1 ������
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
