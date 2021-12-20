#include <iostream>

using namespace std;

int main()
{
	float N;
	cout << "Введите число N" << endl;
	cin >> N;
	for (float i = 1; i <= N; i++)
	{
		for (float j = 1; j <= N; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}
