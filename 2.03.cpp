#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int s, n, t;
	s = 0;
	cin >> n;
	if (n <= 0)
		cout << "Данное число не является натуральным" << endl;
	else
	{
		for (int i = 1; i <= n; i++)
		{
			t = 1;
			for (int j = i; j <= i * 2; j++)
			{
				t *= j;
			}
			s += t;
		}
		cout << s << endl;
	}
}
