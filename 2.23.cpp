#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float n, max, b = 0;
	cin >> n;
	max = -1;
	for (float i = 1; i <= n; i++)
	{

		if ((round(sin(n + (i / n)) * 10) / 10) > max)
		{
			max = (round(sin(n + (i / n)) * 10) / 10);
		}
	}
	
	for (float i = 1; i <= n; i++)
	{
	    if ((round(sin(n + (i / n)) * 10) / 10) == max)
		{
			b++;
		}
	}
	cout << "Наибольший элемент последовательности = " << max << endl;
	cout << "Количество элементов сходных с наибольшим - " << b;
}
