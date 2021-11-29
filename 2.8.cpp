#include <iostream>

using namespace std;

int main()
{
    int n = 1, d, p = 1;
    while (n < 3)
    {
        cout << "Задайте значение длины катетов (>2)" << endl;
        cin >> n;
        if (n < 3)
            cout << "Данное число не удовлетворяет условиям" << endl;
    }
    d = n;
    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= d; i++)
            cout << "* ";
        for (int i = 1; i <= p-1; i++)
            cout << "  ";
        p++;
        d--;
        cout << endl;
    }
    return 0;
}
