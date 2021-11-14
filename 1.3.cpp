#include <iostream>

using namespace std;


int main()
{
	float a;
	cout << "Введите число: ";
	cin >> a;
	if (a < 5)
	    a *= 5;
	if (a > 5 and a < 7) 
		a /= 10;
	if (a > 7) 
		a += 3;
	cout << a;
	return 0;
}

