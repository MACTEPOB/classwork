#include <iostream>
using namespace std;
int main()
{
    int n = 3;
    int a[n];
    bool flag = true;
    srand(time(NULL));
    cout << "Current sequence:";
    for (int i = 0; i <= n - 1; i++)
    {
        a[i] = rand() % 5 + 1;
        cout << " " << a[i];
    }
    cout << endl;
    for (int i = n - 1; i > 0; i--)
	{
		if (a[i] < a[i - 1])
			flag = false; 
	}
	if (flag)
		cout << "Последовательность возрастающая" << endl;
	else
		cout << "Последовательность не возрастающая" << endl;
}