#include <iostream>

using namespace std;

int main()
{
	int N;
	cout << "Введите число N" << endl;
	cin >> N;
	for (float k = 1; k <= N; k++)
	    cout << "* ";
	cout << endl;
	for (float i = 1; i <= N-2; i++)
	{
		cout << "* ";
		for (float j = 1; j <= N-2; j++)
		{
			cout << "  ";
		}
		cout << "*" << endl;
	}
	for (float k = 1; k <= N; k++)
	    cout << "* ";
	cout << endl;
	return 0;
}
