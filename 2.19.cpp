#include <iostream>

using namespace std;

int main()
{
	int n, x = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
	    if (i % 3 == 0)
	        x = x - i;
	    else
	        x = x + i;
	}
	cout << x;
}