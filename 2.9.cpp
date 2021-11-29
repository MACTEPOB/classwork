
#include <iostream>

using namespace std;

int main()
{
    int N, d, k = 0;
    cout << "Введите сторону куба" << endl;
    cin >> N;
    d = N / 2;
    for (int i = 1; i <= d; i++)
        cout << "  ";
    for (int i = 1; i <= N; i++)
        cout << "* ";
    cout << endl;
    
    for (int i = 1; i <= d-1; i++)
        {
        for (int j = 1; j <= d-i; j++)
            cout << "  ";
        cout << "* ";
        for (int j = 1; j <= N-2; j++)
            cout << "  ";
        cout << "* ";
        for (int j = 0; j < k; j++)
            cout << "  ";
        cout << "* " << endl;
        k++;
        }
    for (int i = 1; i<=N; i++)
    {
        cout << "* ";
    }
    for (int j = 0; j < k; j++)
        cout << "  ";
    cout << "* " << endl;
    for (int i = 1; i <= N-d-2; i++)
	{
		cout << "* ";
		for (int j = 1; j <= N-2; j++)
		{
			cout << "  ";
		}
		cout << "* ";
		for (int j = 0; j < k; j++)
            cout << "  ";
        cout << "* " << endl;
	}
    for (int i = 1; i <= d; i++)
	{
		cout << "* ";
		for (int j = 1; j <= N-2; j++)
		{
			cout << "  ";
		}
		cout << "* ";
		for (int j = 0; j < k; j++)
            cout << "  ";
        cout << "* " << endl;
        k--;
	}
	for (int i = 1; i <= N; i++)
	    cout << "* ";
}
