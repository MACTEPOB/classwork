#include <iostream>

using namespace std;

int main()
{
	int n, k;
	int i = 1;
	bool flag = false;
	cout << "Введите кол-во элементов последовательности." << endl;
	cin >> n;
	while (i <= n and !flag)
	{
		cin >> k;
		if (k == 0)
		{
			i++;
		}
		else
		{
			flag = true;
		}
	}
	if (k > 0)
	{
		cout << "Сначала было введено положительное число.";
	}
	else 
	    if (k==0)
	{
		cout << "Все введенные чиисла равны нулю.";
	}
	    else
	    {
	    	cout << "Сначала было введено отрицательное число.";
	    }
	return 0;
}
