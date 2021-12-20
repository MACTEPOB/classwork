#include <iostream>

using namespace std;

int main()
{
	int n, x = 0;
	cin >> n;
	while (n > 0)
	{
	    x = (10 * x) + (n % 10);
	    n = n / 10;
	}
	cout << x;
}