#include <cmath>
#include <iostream>
using namespace std;
int main() {
	double o, tongthoc = 0, tong = 0;
	cout << " tinh so thoc\n";
	cout << "nhap so o: "; cin >> o; cout << endl;

	for (int i = 1; i <= o; i++)
	{
		tongthoc = pow(2, i - 1);
		tong += tongthoc;
		cout << "o thu " << i << " :" << tongthoc << endl;
	}
	cout << "tong so thoc dang co:" << tong << endl;
	return 0;
}